


#include<stdio.h>
#include<stdbool.h>

#define N 10
int stack[N];
int data;
int top = -1;
bool isEmpty(){
	return top == -1;
}
int deleteStack(){
	if(top ==(N-1)){
		top = (N+1)/2;
		return top;
	}
}
bool isFull(){
	deleteStack();
}
int pop(){
	if(!isEmpty()){
		int data = stack[top];
		top--;
		return data;
	}
	else{
		printf("The Stack is Empty!");
	}
}
void push(int n){
	if(!isFull()){
		top++;
		stack[top] = n;
	}

}
int main(){
	push(6);
	push(6);
	push(6);
	push(6);
	push(6);
	push(88);
	push(6);
	push(6);
	push(6);
	push(6);
	push(6);
	push(6);
	push(6);
	push(99);
	int i;
	for(i=0; i<=N-1; i++){
		printf("%d\t", stack[i]);
	}
	getchar();
}
