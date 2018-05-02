#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int counter = 0;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

void *function_c (void *not_used) {
	pthread_t tid = pthread_self(); 
	pthread_mutex_lock(&mutex1);
	counter++;
	printf("[%lu] Counter value: %d\n", tid, counter);
	pthread_mutex_unlock(&mutex1);
}

int main(int argc, char **argv) {
	pthread_t thread1, thread2;
	int rc1, rc2;

	rc1 = pthread_create(&thread1, NULL, function_c, NULL);
	if (rc1) {
		fprintf(stderr, "Error - pthread_create() returns: %d\n", rc1);
		exit(EXIT_FAILURE);
	}

	printf("Created thread %lu\n",thread1);

	rc2 = pthread_create(&thread2, NULL, function_c, NULL);
	if (rc2) {
		fprintf(stderr, "Error - pthread_create() returns: %d\n", rc2);
		exit(EXIT_FAILURE);
	}

	printf("Created thread %lu\n",thread2);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	exit(EXIT_SUCCESS);
}
