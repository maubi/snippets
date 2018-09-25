#include <stdio.h>
#include <unistd.h>

void led_on(int);
void led_off(int);

void (*state)(int);

int main() {
	int signals[] = {0,1,0,0,0,1,0,1,0,0,0,1};
	int len = sizeof(signals) / sizeof(int);
	state = led_on;						// initial state;

	// main loop
	for (int i = 0; i < len; i++) {
		(*state)(signals[i]);
		sleep(1);
		printf("\n");
	}
}

void led_on(int sig) {
	printf("LED ON\n");
	if(sig) {
		state = led_off;
	}
}

void led_off(int sig) {
	printf("LED OFF\n");
	if(sig) {
		state = led_on;
	}
}
