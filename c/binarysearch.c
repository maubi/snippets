#include <stdio.h>

int binary_search_recursive(int list[], int start, int end, int x);
int binary_search_iterative(int list[], int size, int x);

int main() {
	int list[] = {1, 3, 6, 10, 15, 21, 22, 30};
	int index, x;

	printf("Input a number to search ");
	scanf("%d", &x);
	
	index = binary_search_recursive(list, 0, 8, x);
	if (index == -1) {
		printf("Value %d not found.\n", x);
	} else {
		printf("Value %d found at index %d.\n", x, index);
	}

	index = binary_search_iterative(list, sizeof(list) / sizeof(int), x);
	if (index == -1) {
		printf("Value %d not found.\n", x);
	} else {
		printf("Value %d found at index %d.\n", x, index);
	}
	return 0;
}

int binary_search_recursive(int list[], int start, int end, int x) {
	int low = start, high = end, mid;

	if (low > high) {
		return -1;
	}

	mid = low + (high - low) / 2;	// (low + high) / 2 may overflow

	if (list[mid] == x) {
		return mid;
	} else if (list[mid] < x) {
		return binary_search_recursive(list, mid + 1, end, x);
	} else {
		return binary_search_recursive(list, start, mid - 1, x);
	}
}

int binary_search_iterative(int list[], int size, int x) {
	int low = 0, high = size - 1, mid;

	while(low <= high) {
		mid = low + (high - low) / 2;

		if(list[mid] == x) {
			return mid;
		} else if (list[mid] < x) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
		
	}
	return -1;
}











