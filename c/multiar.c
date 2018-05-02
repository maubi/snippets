#include <stdio.h>
#include <stdlib.h>

#define	ROWS 10
#define COLS 10

void myprint(int **, int, int);

int main(void) {
	int **ptr;

	ptr = (int **) malloc(ROWS * sizeof(int *));
	
	for (int i = 0; i < ROWS; i++) {
		ptr[i] = (int *) malloc(COLS * sizeof(int));
	}

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			ptr[i][j] = i + j;
		}
	}

	myprint(ptr+2, ROWS-2, COLS);

	for (int i = 0; i < ROWS; i++) {
		free(ptr[i]);
	}
	free(ptr);
	return 0;
}

void myprint(int **ptr, int r, int c) {
	int i, j;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
}

