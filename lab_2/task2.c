// -----------------------------------------------------
// CSC371 Advanced Object Oriented Programming (2021/22)
// 
// (c) Martin Porcheron
//     m.a.w.porcheron@swansea.ac.uk
// -----------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "timestables.h"

void generateTable(int num, int *table);
void printTable(int num, int *table);

int main(int argc , char *argv[]) {

	int *tables[MAX_TABLE_SIZE];

	int i;
	for (i = 0; i < MAX_TABLE_SIZE; i++) {
		tables[i] = (int*) malloc(MAX_TABLE_SIZE * sizeof(int));
		generateTable(i, tables[i]);
	}

	printTables(tables);

	for (i = 0; i < MAX_TABLE_SIZE; i++) {
		free(tables[i]);
	}
	return 0;
}