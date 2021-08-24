#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
};

typedef struct Node *stack;

bool isEmpty(stack s) {
	return (s == NULL);
}

Node *createNote(int data) {
	Node *p = new Node();
	if (p == NULL) {
		return NULL;
	}
	p->data = data;
	p->next = NULL;
	return p;
}

void push(stack &s, int data) {
	
}

int main(){


	cout << endl;
	return 0;
}