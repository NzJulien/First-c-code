

#include<stdbool.h>
#include<stdio.h>

#define N 20
int top =-1;
int stack[N];
bool isEmpty(){
	if(top <= -1)
		return true;
	else
		return false;
}
bool isFull(){
	if(top == (N-1))
		return true;
	else
		return false;
}
int pop(){
	if(!isEmpty()){
		int data = stack[top];
		top--;
		return data;
	}
	else
		printf("Stack is Empty!");
		return -1;
}
void push(int n){
	if(!isFull()){
		
		stack[++top] = n;
	}
	else
		printf("stack is Full!");
}

int main(){
	push(10);
	push(20);
	push(30);
	printf("Popped: %d\n", pop());
	printf("Popped: %d\n", pop());
	printf("Popped: %d\n", pop());
	printf("Popped: %d\n", pop());
	getchar();
}
