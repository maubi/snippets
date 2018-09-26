#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

typedef void (*callback)(int, int, void *);

void cb_1(int, int, void *);
void cb_2(int, int, void *);

void func(callback, void *);

int main(void) {
	int multiplier = 2;
	srand(time(NULL));

	printf("-----------\n");
	func(cb_1, (void *)"CB_1");
	printf("-----------\n");
	func(cb_1, NULL);
	printf("-----------\n");
	func(cb_2, (void *)&multiplier);
	printf("-----------\n");
	func(cb_2, NULL);
	printf("-----------\n");
	
	return 0;
}

// callback 1: prints a + b with an optional user supplied label
void cb_1(int a, int b, void *user_data) {
	char *label = (char *) user_data;
	printf("DEBUG: cb_1 called with a=%d, b=%d\n", a, b);
	if(label) {
		printf("%s: %d\n", label, a + b);
	} else {
		printf("%d\n", a + b);
	}
}

// callback 2: prints a * b with an optional multiplier
void cb_2(int a, int b, void *user_data) {
	int *multiplier = (int *) user_data;
	printf("DEBUG: cb_2 called with a=%d, b=%d\n", a, b);
	if(multiplier) {
		printf("[%d] %d\n", *multiplier, a * b * *multiplier);
	} else {
		printf("%d\n", a * b);
	}
}

// generates two random numbers and execute a callback on them
void func(callback cb, void *user_data) {
	int a = rand() % 10;
	int b = rand() % 10;
	(*cb)(a, b, user_data);
}





