#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void myprint(char *ar[], int);

int main(void) {
	char *ar[10];

	for (int i = 0; i < 10; i++) {
		ar[i] = (char *) malloc(10 * sizeof(char));
		strcpy(ar[i], "ABCDE");
	}

	myprint(ar, 10);

	for (int i = 0; i < 10; i++) {
		free(ar[i]);
	}

	return 0;
}

void myprint(char *ar[], int r) {
	int i;

	for (i = 0; i < r; i ++) {
		printf("%s\n",ar[i]);
	}
}
