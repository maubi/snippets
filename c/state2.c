#include <stdio.h>
#include <unistd.h>

int main() {
	int state = 0;						// initial state
	int signals[] = {0,1,0,0,0,1,0,1,0,0,0,1};
	int len = sizeof(signals) / sizeof(int);

	for (int i = 0; i < len; i++) {
		switch (state) {
			case 0:						// state 0: ON
				printf("LED: ON\n");
				if(signals[i]) {	
					printf("  0->1\n");
					state = 1;
				}
				break;
			case 1:						// state 1: OFF
				printf("LED: OFF\n");
				if(signals[i]) {
					printf("  1->0\n");
					state = 0;
				}
				break;
		}
		sleep(1);
		printf("\n");
	}
}
