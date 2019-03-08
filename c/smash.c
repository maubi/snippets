/*
	smash.c

	Simple example of stack smashing.
	Compile it with -fno-stack-protector
*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE	10

void doublePrint(char *s);

int main(int argc, char **argv) {
	char *s = "KAYA";
	char *t = "NORIKO TAKAYA";

	doublePrint(s);
	doublePrint(t);
	return 0;
}

void doublePrint(char *s) {
	char buf[MAX_SIZE];

	strcpy(buf, s);
	strcat(buf, s);
	
	printf("%s\n", buf);
}
