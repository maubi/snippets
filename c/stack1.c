#include <stdio.h>
#include <limits.h>

#define MAXSIZE 10
#define TRUE 1
#define FALSE 0

struct stack {
	int top;
	int data[MAXSIZE];
};

typedef struct stack Stack;

int push(Stack *s, int n) {
	if(s->top == MAXSIZE - 1) {
		printf("Error: stack full\n");
		return FALSE;
	} 
	s->top++;
	s->data[s->top] = n;
	return TRUE;
}

void pop(Stack *s) {
	s->top--;
	if (s->top < 0) s->top = - 1;
}

int top(Stack *s) {
	if(s->top == -1) {
		printf("Error: stack is empty\n");
		return INT_MAX;
	}
	return s->data[s->top];
}

int is_empty(Stack s) {
	return s.top == -1 ? TRUE : FALSE;
}

void init_stack(Stack *s) {
	s->top = -1;
}

int main() {

	Stack stack1;
	init_stack(&stack1);

	push(&stack1, 10);
	push(&stack1, 20);
	push(&stack1, 30);

	printf("%d\n", top(&stack1));
	pop(&stack1);
	printf("%d\n", top(&stack1));
	pop(&stack1);
	printf("%d\n", top(&stack1));
	pop(&stack1);
	printf("%d\n", top(&stack1));

	printf("%s\n", is_empty(stack1) ? "is_empty: TRUE" : "is_empty: FALSE");

	return 0;
}





