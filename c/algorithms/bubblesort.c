#include <stdio.h>
#include <stdlib.h>

#define SIZE	5 
#define DEBUG	1

/**
@file
@author Mauro Bisiani <bisianimauro@gmail.com>
Bubblesorts a list
*/

/**
Bubblesorts a list in-place
@param	list	unsorted list
@param	size	list size
@return	none
*/
void bubblesort(int list[], int size) {
	int swapped, temp, i, pass=0;
	do {
		swapped = 0;
		for(i = 0; i < (size - 1); i++) {
			if(list[i] > list[i+1]) {
				temp		= list[i];
				list[i]		= list[i+1];
				list[i+1]	= temp;
				swapped++;
			}	
		}
		if(DEBUG)
			printf("Pass: %d Swapped: %d\n", pass, swapped);
		pass++;
	} while (swapped);
}

int main(void) {
	int i, ar[SIZE];

	for(i = 0; i < SIZE; i++) {
		printf("Enter number: ");
		scanf("%d", &ar[i]);
	}

	bubblesort(ar, SIZE);	

	for(i = 0; i < SIZE; i++) {
		printf("%d\n",ar[i]);
	}

	return 0;
}
