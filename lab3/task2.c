// -----------------------------------------------------
// CSC371 Advanced Object Oriented Programming (2021/22)
// 
// (c) Martin Porcheron
//     m.a.w.porcheron@swansea.ac.uk
// -----------------------------------------------------

#include <stdio.h>
#include "constituency.h"

const int numConstituencies = 5;



int main() {
  
  struct Constituency constituencies[5];

  constructConstituency(
    &constituencies[0],
    "Swansea East",
    (unsigned int[]){1,2,3,4}, 4
  );

  constructConstituency(
    &constituencies[1],
    "Swansea West",
    (unsigned int[]){0,2}, 2
  );

  constructConstituency(
    &constituencies[2],
    "Gower",
    (unsigned int[]){0,1,3}, 3
  );

  constructConstituency(
    &constituencies[3],
    "Neath",
    (unsigned int[]){0,2,4}, 3
  );

  constructConstituency(
    &constituencies[4],
    "Aberavon",
    (unsigned int[]){0,3}, 2
  );

  int i;

  struct Constituency curr;
  int highest;
  int maxNeighbours = 0;
  int lowest;
  int minNeighbours = 100;
  for (i=numConstituencies-1; i>=0; --i) {
    curr = constituencies[i];
    if (curr.numNeighbours >= maxNeighbours) {
      maxNeighbours = constituencies[i].numNeighbours;
      highest = i;
    }
    if (curr.numNeighbours <= minNeighbours) {
      minNeighbours = constituencies[i].numNeighbours;
      lowest = i;
    }
    printConstituency(&curr);
  }

  printf("\n%s has the most bordering constituencies:\n", constituencies[highest].name);
  for (i=0; i<constituencies[highest].numNeighbours; ++i) {
    printf("    %s\n", constituencies[constituencies[highest].neighbours[i]].name);
  } 

  printf("\n%s has the fewest bordering constituencies:\n", constituencies[lowest].name);
  for (i=0; i<constituencies[lowest].numNeighbours; ++i) {
    printf("    %s\n", constituencies[constituencies[lowest].neighbours[i]].name);
  } 

  for (i=0; i<numConstituencies; ++i) {
    destructConstituency(&constituencies[i]);
  }
  
  return 0;
}