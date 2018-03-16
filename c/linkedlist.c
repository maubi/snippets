#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct node {
	int x;
	int y;
	struct node *next;
	struct node *prev;
};

struct node *head = NULL;
struct node *tail = NULL;

int get_length(void);
struct node *get_at(int);
void add2head(int, int);
void add2tail(int, int);
void add_before(struct node *, int, int);
void print_list(void);
void cleanup(void);

int main(int argc, char *argv[]) {
	int coord_x[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int coord_y[] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	int i;

	for (i = 0; i < 10; i++) {
		add2head(coord_x[i], coord_y[i]);	
	}

	print_list();
	printf("-------------------\n");
	add2tail(100,100);
	print_list();
	printf("-------------------\n");
	int len = get_length();
	printf("Length: %d\n", len);
	struct node *p1 = get_at(3);
	printf("[%u] %d %d\n", p1, p1->x, p1->y);
	printf("-------------------\n");
	add_before(p1, 20, 20);
	print_list();

	cleanup();
}

int get_length(void) {
	struct node *p;
	int i;

	if(tail == NULL)
		return 0;
	for(i = 0, p = tail; p != NULL; p = p->next, i++)
		;
	return i;
}

struct node *get_at(int n) {
	int i;	
	struct node *p;

	if(get_length() < n)
		return NULL;

	if(n == 1)
		return tail;

	for(i = 2, p = tail; i<= n; i++) {
		printf("%d ", i);
		printf("%u ", p);
		p = p->next;
		printf("%u ", p);
		printf("\n");
	}
	return p;
}

struct node *find_at(int x, int y) {
}

void add_before(struct node *n, int x, int y) {
	struct node *prev, *p;
	if(n->prev == NULL) {
		add2tail(x, y);
		return;
	}

	prev = n->prev;

	p = (struct node *) malloc(sizeof(struct node));

	p->x = x;
	p->y = y;
	p->prev = prev;
	p->next = n;
	prev->next = p;
	n->prev = p;
	return;
}

void add2head(int x, int y) {
	struct node *p;

	// alloc new node
	p = (struct node *) malloc(sizeof(struct node));
	
	// update new node pointers
	p->prev = head;	
	p->next = NULL;
	p->x = x;
	p->y = y;

	if(head == NULL) {		// first node: update tail pointer
		tail = p;
	} else {				// not first node: update previous head next pointer
		head->next = p;
	}

	// update head
	head = p;

	return;
}

void add2tail(int x, int y) {
	struct node *p;

	// alloc new node
	p = (struct node *) malloc(sizeof(struct node));
	
	// update new node pointers
	p->prev = NULL;	
	p->next = tail;
	p->x = x;
	p->y = y;

	if(tail == NULL) {		// first node: update hed pointer
		head = p;
	} else {				// not first node: update previous tail prev pointer
		tail->prev = p;
	}

	// update head
	tail = p;

	return;
}

void print_list(void) {
	struct node *cur;
	struct node *next;

	for(cur = tail; cur != NULL; cur = cur->next)
		printf("[%u] x:%3.3d y:%3.3d next:%u\n",cur, cur->x, cur->y, cur->next);
	return;
}

void cleanup(void) {
	struct node *cur;
	struct node *next;

	for(cur = tail; cur != NULL; cur = cur->next) {
		printf("free: %u \n", cur);
		free(cur);
	}
	return;
}





