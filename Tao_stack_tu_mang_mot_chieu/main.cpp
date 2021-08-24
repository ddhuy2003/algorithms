#include <iostream>

using namespace std;

int current_size = -1;
const int MAX_SIZE = 100;
int stack[MAX_SIZE];

bool isEmpty() { //kiem tra stack co trong chua
	return (current_size == -1);
}

bool isFull() { // kiem tra stack day hay chua
	return (current_size == MAX_SIZE);
}

void push(int data) { // them du lieu vao stack
	if(!isFull()) {
		current_size++;
		stack[current_size] = data;
	} else {
		cout << "Stack full!" << endl;
	}
}

int top() {//lay phan tu top nhung khong xoa khoi stack
	if(!isEmpty()) {
		int data = stack[current_size];
		return data;
	} else {
		cout << "Stack empty!" << endl;
	}
}

int pop() { //lay phan tu top va xoa khoi stack
	if(!isEmpty()) {
		int data = stack[current_size];
		current_size--;
		return data;
	} else {
		cout << "Stack empty!" << endl;
	}
}

int main(){
	push(100);
	push(-255);
	push(-25);

	// cout << current_size;
	cout << "Top: " << top() << endl;
	pop();
	cout << "Top: " << top() << endl;

	while(!isEmpty()) {
		int data = pop();
		cout << data << " <-- ";
	}

	cout << endl;
	return 0;
}