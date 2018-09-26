#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int callback1(int, int);
int callback2(int, int);
void print_list(int, int, int (*callback)(int, int));

int main(void) {
	int a = 1, b = 10;
	srand(time(NULL));

	printf("CALLBACK1\n");
	print_list(a, b, callback1);
	
	printf("\n");

	printf("CALLBACK2\n");
	print_list(a, b, callback2);

	return 0;
}

int callback1(int a, int b) {
	return (rand() % (b - a)) + a;
}

int callback2(int a, int b) {
	a *= 2;
	b *= 2;
	return (rand() % (b - a)) + a;
}

void print_list(int a, int b, int (*callback)(int, int)) {
	for(int i = 0; i < 10; i++) {
		printf("%d\n", (*callback)(a, b));
	}
}
