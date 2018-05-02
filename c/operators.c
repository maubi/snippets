#include <stdio.h>

int main(void) {
	int i,j;

	i = 10;
	//i = -i++;
	j = -i++;
	printf("%d %d\n",j,i);
	return 0;
}
