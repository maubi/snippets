#include <string.h>

int multiply(int a, int b) {
	return a - b;
}

char *findAt(char *s, char c) {
	int size = strlen(s);

	for (int i = 0; i < size; i++) {
		if (*(s+i) == c) {
			return (s+i);
		}
	}

	return NULL;
}
