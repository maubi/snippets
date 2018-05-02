#include <stdio.h>

int main(void) {
	int ar[2][2][2] = {1,2,3,4,5,6};
	int ar2[2][2] = {10,20,30,40};

	int (*ptr)[2][2] = ar;
	int (*ptr2)[2] = ar2;

	printf("%d\n", ptr[0][1][1]);
	printf("%d\n", ptr2[0][1]);

	return 0;
}
