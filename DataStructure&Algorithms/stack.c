#include<stdio.h>
#include<conio.h>
#include<windows.h>

void textColor(int color){
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle,color|FOREGROUND_INTENSITY);
}
// creating stack data structure
#define MAX_STACK 5
typedef int ElementType;
typedef struct{
    int top;
    ElementType list[MAX_STACK];
}intStack;

// function check wether a stack is full or not
short int isFullStack(const intStack st){
    return(st.top == MAX_STACK - 1);
}

// function check wether a stack is empty or not
short int isEmptyStack(const intStack st){
    return(st.top == -1);
}
// creating empty stack
intStack getEmptyStack(){
    intStack st;
    st.top = -1;
    return st;
}
// create push function into empty stack
void push(intStack *st,const ElementType newItem){
    if(isFullStack(*st)){
      printf("\n Stack is overflow....\n cannot add any more items...\n");
        return;
    }
    st->top++;
    st->list[st->top] = newItem;
}
// create pop function to take out the top of the stack
ElementType pop(intStack *st){
    ElementType getItem = 0;
    if(isEmptyStack(*st)){
        printf("\nStack is underflow.... \n No items in stack\n");
    }else{
        getItem = st->list[st->top];
        st->top--;
    }
    return getItem;
}
// get item at top position
ElementType peekStack(const intStack st){
    ElementType topItem = 0;
    if(!isEmptyStack(st))
    topItem = st.list[st.top];
    return topItem;
}
// get total number of items in stack
int sizeOfStack(const intStack st){
    return (st.top + 1);
}

int main(void){
    intStack integerStack = getEmptyStack();

    push(&integerStack,134);
    push(&integerStack,1324);
    printf("Top Item is %d\n",peekStack(integerStack));

    push(&integerStack,2309);
    push(&integerStack,13243);
    printf("Top Item is %d\n",peekStack(integerStack));
    printf("Total number of items: %d\n",sizeOfStack(integerStack));

    push(&integerStack,9384);
    push(&integerStack,57239);
    push(&integerStack,1237);
    printf("Total number of items: %d\n",sizeOfStack(integerStack));
    printf("Top Item is %d\n",peekStack(integerStack));
    
    pop(&integerStack);
    printf("Total number of items: %d\n",sizeOfStack(integerStack));
    printf("Top Item is %d\n",peekStack(integerStack));

    return 0;
}