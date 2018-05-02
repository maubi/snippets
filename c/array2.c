#include <stdio.h>

void myprint(char *ar[], int);
void myprint2(char **, int);

int main(void) {
	char *ar[3] =	{
						"abc",
						"def",
						"ghi"
					};

	myprint(ar, 3);
	myprint2(ar, 3);

	return 0;
}

void myprint(char *ar[], int c) {
	int i;

	for (i=0; i < c; i++) {
		printf("%s\n", ar[i]);
	}
}

void myprint2(char **ptr, int c) {
	int i;

	for (i=0; i < c; i++) {
		printf("%s\n", ptr[i]);
	}
}
