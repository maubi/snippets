#include <stdio.h>

#define BUFSIZE 10

void printBuffer(int *buf, int len) {
	for(int i = 0; i < len; i++) {
		printf("%2d ", buf[i]);
	}
	printf("\n");
}

int main() {

	int buffer[BUFSIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (int i = 0; i < BUFSIZE * 2; i++) {
		buffer[i % BUFSIZE] = i;
		printBuffer(buffer, BUFSIZE);
	}

	return 0;
}
