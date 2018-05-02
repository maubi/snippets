#include <stdio.h>

int main(void) {
	int ar[2][2] = {1, 2, 3, 4};

	int *p = ar[1];
	int (*ptr)[2] = ar;						// ar is a pointer to elements of type int [2]

	printf( "%d\n", *(*(ar+1)+1) );
	printf( "%d\n", ar[1][1] );
	printf( "%d\n", p[1] );
	printf( "%d\n", p[0] );
	printf( "%d\n", ptr[0][1] );

	int ar2[] = {10, 20, 30};
	printf("%d\n", *(ar2+2));
	int *ptr2 = ar2;
	printf("%d\n", *(ptr2+2));

	return 0;
}
