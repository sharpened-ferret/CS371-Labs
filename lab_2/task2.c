// -----------------------------------------------------
// CSC371 Advanced Object Oriented Programming (2021/22)
// 
// (c) Martin Porcheron
//     m.a.w.porcheron@swansea.ac.uk
// -----------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "timestables.h"

int main(int argc , char *argv[]) {

	int *tables[MAX_TABLE_SIZE];

	int i;
	for (i = 0; i < MAX_TABLE_SIZE; i++) {
		int *tempPointer = (int*) malloc(MAX_TABLE_SIZE * sizeof(int));
		if (tempPointer == NULL) {
			return 1;
		}
		else {
			tables[i] = tempPointer;
			generateTable(i, tables[i]);
		}
	}

	printTables(tables);

	for (i = 0; i < MAX_TABLE_SIZE; i++) {
		free(tables[i]);
		tables[i] = NULL;
	}
	return 0;
}