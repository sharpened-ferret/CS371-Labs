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
	if (argc != 2) {
		printf("%s <num>\n where <num> is an integer between 0 and 12\n", argv[0]);
		return -1;
	}

	int num = atoi(argv[1]);
	if (num < 0 || num > 12) {
		printf("Invalid number size! Must be between 0 and 12.\n");
		return -1;
	}
	
	int *values = (int*) malloc(MAX_TABLE_SIZE * sizeof(int)); 
	generateTable(num, values);
	printTable(num, values);
	
	free(values);
	return 0;
}
