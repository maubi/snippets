#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#include "strings.h"

int main(int argc, char *argv[]) {
	char *s = "Ami Kawashima";

	change(&s);
	printf("Main after change: %s\n", s);
	printf("Size: %d\n", strlen(s));

	atoupper(&s);
	printf("Main after atoupper: %s\n", s);
	printf("Size: %d\n", strlen(s));
	// FIXME: free the memory!

	char *dyn_p = 0;
	dynstr(&dyn_p);
	printf("Main afetr dynstr: %s\n", dyn_p);
	printf("Size: %d\n", strlen(dyn_p));

	char *in = "Kuroyukihime";
	char *out = atoupper2(in);
	printf("Main after atoupper2: %s\n", out);

	char *pos = find_at(in, 'y');
	if(pos) printf("Main after findAt: %c\n", *pos);

	// SEGMENTATION FAULT! A string literal is written in a read-only memory block
	//char *test = "Test Test Test";
	//*test = '#';
	//printf("%s\n", test);
	char string1[] = "Neurolink";
	string1[2] = '#';				// mutable
	printf("Main string1: %s\n",string1);

	char *pos2 = find_at2(in, 'y');
	if(pos2) printf("Main after findAt2: %c\n", *pos2);

	return 0;
}

char *find_at(char *s, char c) {
	int size = strlen(s);
	for(int i = 0; i < size; i++) {
		if (*(s+i) == c) return (s+i);
	}
	return NULL;
}

char *find_at2(char *s, char c) {
	for (int i=0; *(s+i) != '\0'; i++) {
		if (*(s+i) == c) return (s+i);
	}
	return NULL;
}

void change(char **p) {
	*p = "Lain Iwakura";
}

void atoupper(char **s) {
	// allocate new buffer
	int size = strlen(*s) + 1;
	char *new = (char *) malloc(sizeof(char) * size) ;

	for (int i = 0; i < (size - 1); i++) {
		*(new + i) = ( islower(*(*s + i)) ) ? ((char) toupper(*(*s+i)) ) : (*(*s+i));
	}
	*(new+(size-1)) = '\0';

	*s = new;
}

char *atoupper2(char *s) {
	int size = strlen(s) + 1;
	char *new = (char *) malloc(sizeof(char) * size);

	for (int i = 0; i < (size -1); i++) {
		*(new+i) = (char) toupper(*(s+i));
	}
	*(new+(size-1)) = '\0';
	return new;
}

#define BUFSIZE 11

void dynstr(char **p) {
	char *dyn = (char *) malloc(BUFSIZE);
	for (int i = 0; i < (BUFSIZE-1); i++) {
		*(dyn + i) = '#';	
	}
	*(dyn + (BUFSIZE-1)) = '\0';
	*p = dyn;
}







