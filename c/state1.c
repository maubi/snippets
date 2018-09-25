#include <stdio.h>
#include <unistd.h>

#define MAX_COUNT	10

int main() {
	int state = 0;						// initial state
	int count = 0;

	while(1) {
		printf("DEBUG: count=%d state=%d mod=%d\n", count, state, count % 2);
		switch (state) {
			case 0:						// state 0: ON
				if(count == MAX_COUNT) {				// transition 0->2
					printf("LED: OFF\n");
					printf("\t0->2\n");
					state = 2;
					break;
				} else {								// transition 0->1
					printf("LED: ON\n");
					printf("\t0->1\n");
					state = 1;
					sleep(2);
					break;
				}
			case 1:						// state 1: OFF
				printf("LED: OFF\n");
				printf("\t1->0\n");
				sleep(1);
				state = 0;
				break;
			case 2:
				printf("\t2->END\n");
				printf("Bye!\n");
				return 0;
				
		}
		count++;
		printf("\n");
	}
}
