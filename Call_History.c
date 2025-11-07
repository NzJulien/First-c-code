

#include<stdio.h>
#include<stdbool.h>

#define N 25
int i;
long long call_history[N];
int top = -1;
bool isEmpty(){
	if(top == -1){
		return true;
	}
	else{
		return false;
	}
}
bool isFull(){
	if(top >= (N-1)){
		return true;
	}
	else{
		return false;
	}
}
void deleteHalf(){
	int half = (top+1)/2;
	
	printf("\nCall History Full! \nNOw DELETING!\n", half);
	
	for(i = 0; i<=top-half;i++){
		
		call_history[i] = call_history[i+half];
	}
	top = top - half;
}
void push(long long n){
	if(isFull()){
		deleteHalf();
	}
	call_history[++top] =  n;
}
long long pop(){
	if(!isEmpty()){
		return call_history[top--];
	}
	else{
		printf("Call history is empty!\n");
		return -1;
	}
}
void display() {
    if (isEmpty()) {
        printf("No call history.\n");
        return;
    }

    printf("\nCurrent Call History (Oldest to Newest):\n");
    for (int i = 0; i <= top; i++) {
        printf("%lld\t", call_history[i]);
    }
    printf("\n");
}
int main(){
	push(722727727);
	push(425455677);
	push(728955463);
	push(798787755);
	push(712343235);
	push(722789756);
	push(722727727);
	
	display();
	getchar();
}
