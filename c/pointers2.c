#include <stdio.h>
#include <stdlib.h>

void modify(char *);
void modify2(char **);
void printVal(char *);

int main(int argc, char *argv[]) {
	char *zErrMsg = 0;

	modify(zErrMsg);

	printf("Main: %s\n", zErrMsg);

	modify2(&zErrMsg);
	printf("Main2: %s\n", zErrMsg);

	zErrMsg = "Ciao, Mondo!";
	printVal(zErrMsg);

	return 0;
}

void modify(char *z) {
	z = "Hello, World!";
	printf("Modify: %s\n", z);
}

void modify2(char **z) {
	*z = "Hello, World!";
}

void printVal(char *z) {
	printf("printVal: %s\n", z);
}
