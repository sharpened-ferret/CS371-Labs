# ifndef CONSTITUT_H
# define CONSTITUT_H

struct Constituency
{
    char *name;
    unsigned int* neighbours;
    unsigned int numNeighbours;
};


void constructConstituency(struct Constituency * const obj, 
                            char const *name, 
                            unsigned int* const neighbours,
                            unsigned int const numNeighbours);
void printConstituency(struct Constituency * const obj);
void destructConstituency(struct Constituency * const obj);

# endif