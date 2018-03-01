#include <stdio.h>
#include <stdlib.h>

void printStrings(char *s[], int n);

int main(int argc, char *argv[]) {
	int param1, *p1;
	char *strings[] =	{
							"Lain Iwakura",
							"Kou Yagami",
							"Scarlet Rain",
							"Kuroyuki-hime"	
						};

	char c, *string1 = "Hello, World!";
	char c1 = string1[2];				// dereferencing using array subscript
	char c2 = *(string1+2);				// dereferencing using pointer

	struct bit {
		unsigned char has_wings: 1;
		unsigned char has_fangs: 1;
		unsigned char : 6;
	} bit1;

	unsigned char bit2 = 0;

	printf("%c %c\n", c1, c2);
	
	param1 = 10;
	p1 = &param1;
	*p1 = 20;

	printf("*p1: %d\n", param1);

	printStrings(strings, 4);

	return 0;
}

void printStrings(char **s, int n) {		// char **s == char *s[]!
	int i;

	for (i = 0; i < n; i++) {
		printf("%s\n",*s++);
	}
}
