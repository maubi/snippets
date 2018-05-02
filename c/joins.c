#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NTHREADS 10

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
int counter = 0;

void *thread(void *not_used) {
	pthread_mutex_lock(&mutex1);
	counter++;
	printf("Thread: %lu Counter: %d\n", pthread_self(), counter);
	pthread_mutex_unlock(&mutex1);
}

int main(int argc, char **argv) {
	pthread_t threads[NTHREADS];

	for (int i = 0; i < NTHREADS; i++) {
		pthread_create(&threads[i], NULL, thread, NULL);
	}

	for (int i = 0; i < NTHREADS; i++) {
		pthread_join(threads[i], NULL);
	}

	printf("Main - Counter: %d\n", counter);
	exit(EXIT_SUCCESS);
}



