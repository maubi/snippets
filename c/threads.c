#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

void *print_msg (void *ptr) {
	printf("Thread1: %s\n", (char *) ptr);
}

int main(int argc, char **argv) {
	pthread_t thread1, thread2;
	const char *message1 = "[Thread 1] Lain Iwakura";
	const char *message2 = "[Thread 2] Violet Evergarden";
	int ret1, ret2;

	ret1 = pthread_create(&thread1, NULL, print_msg, (void *) message1);
	if (ret1) {
		fprintf(stderr, "Error - pthread_create() return code: %d\n", ret1);
		exit(EXIT_FAILURE);
	}

	ret2 = pthread_create(&thread2, NULL, print_msg, (void *) message2);
	if (ret2) {
		fprintf(stderr, "Error - pthread_create() return code: %d\n", ret2);
		exit(EXIT_FAILURE);
	}

	printf("pthread_create() for thread 1 returns: %d\n", ret1);
	printf("pthread_create() for thread 2 returns: %d\n", ret2);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	exit(EXIT_SUCCESS);
}
