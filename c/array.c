#include <stdio.h>
#include <stdlib.h>

void printInt(int p[]);

int main (int argc, char *argv[]) {
	int ar1[] = {10, 20, 30, 40, 50};
	int ar2[5];

	//printf("%d\n", *(ar1++)); illegal
	printInt(ar1);

	printf("Array1\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(ar1+i));
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		*(ar2+i) = *(ar1+i);		// pointer notation
		ar2[i] = ar1[i];			// subscript notation
	}

	printf("Array2\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\n",ar2[i]);
	}
	printf("\n");

	return 0;
}

void printInt(int p[]) {
	printf("%d\n",*(p++));
}
