#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct Stack{
    int arr[MAX];
    int top;
};

void initialize(struct Stack *stack){
    stack->top = -1;
}

int isEmpty(struct Stack *stack){
    if(stack->top==-1)
        return 1;

    return 0;
}

int isFull(struct Stack *stack){
    if(stack->top == MAX-1)
        return 1;
    
    return 0;
}

void push(struct Stack *stack, int value){
    if(isFull(stack)){
        printf("Stack Overflow\n");
        return;
    }

    stack->arr[++stack->top] = value;
    printf("Value pushed is: %d\n", value);
}

int pop(struct Stack *stack){
    if(isEmpty(stack)){
        printf("Stack Underflow\n");
        return 0;
    }
    return stack->arr[stack->top--];
}

void peek(struct Stack *stack){
    if(isEmpty(stack)){
        printf("Stack is Empty");
    }else{
        printf("\nTop of the stack is %d\n", stack->arr[stack->top]);
    }
}

void display(struct Stack *stack){
    if(isEmpty(stack)){
        printf("Stack is empty\n");
        return;
    }
    printf("\nStack Elements: \n");
    for(int i=0; i<=stack->top; ++i){
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main(){
    struct Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    peek(&stack);

    printf("Popped elements: %d\n", pop(&stack));
    printf("Popped elements: %d\n", pop(&stack));

    display(&stack);

    return 0;
}