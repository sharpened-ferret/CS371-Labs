# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "constituency.h"

void constructConstituency(struct Constituency * const obj, 
                            char const *name, 
                            unsigned int* const neighbours,
                            unsigned int const numNeighbours) {
                                obj -> name = NULL;
                                obj -> neighbours = NULL;
                                obj -> numNeighbours = numNeighbours;

                                obj->name = (char*) malloc(strlen(name)*sizeof(char));
                                strcpy(obj -> name, name);
                                obj->neighbours = (int*) malloc(numNeighbours * sizeof(int));
                                memcpy(obj -> neighbours, neighbours, numNeighbours * sizeof(int));
                            }

void printConstituency(struct Constituency * const obj) {
    printf("%s | %d neighbours | [ ", obj->name, obj->numNeighbours);

    int i;
    for (i = 0; i < obj->numNeighbours; ++i) {
        printf("%d ", obj->neighbours[i]);
    }

    printf("]\n");
}
void destructConstituency(struct Constituency * const obj) {
    free(obj->name);
    free(obj->neighbours);
    obj->name = NULL;
    obj->neighbours = NULL;
    obj->numNeighbours = 0;
}

struct Constituency * copyConstituencies(struct Constituency * constituencies, const int numConstituencies) {
    struct Constituency * returnConstituencies = malloc(sizeof(struct Constituency) * numConstituencies);
    int i;
    for (int i = 0; i < numConstituencies; i++) {
        struct Constituency tempConstit = constituencies[i];
        constructConstituency(&returnConstituencies[i], tempConstit.name, tempConstit.neighbours, tempConstit.numNeighbours);
    }
    return returnConstituencies;
}