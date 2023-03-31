#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// creating stack data structure with dynamic array
typedef int ElementType;
typedef struct{
	unsigned int capacity;
	int top;
	ElementType *list;
}IntStack;

/** Operations on Stack */
short int isFullStack(const IntStack st){
	return (st.top == st.capacity - 1);
} 
short int isEmptyStack(const IntStack st){
	return (st.top == -1);
}
IntStack getEmptyStack(){
	IntStack st;
	st.top = -1;
	st.capacity = 32;
	st.list = NULL;
	return st;
}

IntStack getNewStack(const unsigned	int newCapacity){
	IntStack st;
	st.top = -1;
	st.capacity = newCapacity;
	st.list = (ElementType *)malloc(newCapacity*sizeof(ElementType));
	return st;
}

// push 1 new item to stack
void pushStack(IntStack *st, 
	const ElementType newItem){
	if(isFullStack(*st)){
		printf("\nStack is overflow...\n Cannot add any more items...\n");
		return;
	}
	st->top++;
	st->list[st->top] = newItem;		
}

// pop an item from stack
ElementType popStack(IntStack *st){
	ElementType getItem = 0;
	if(isEmptyStack(*st)){
		printf("\nStack is underflow. No items in stack...\n");
	}else{
		getItem = st->list[st->top];
		st->top--;
	}
	return getItem;
}

// get items at top position
ElementType peekStack(const IntStack st){
	ElementType topItem = 0;
	if(!isEmptyStack(st)) 
		topItem = st.list[st.top];
	return topItem;
}

// get total number of items in stack
int sizeOfStack(const IntStack st){
	return (st.top + 1);
}

int main(void){
	int dec = 0;
	IntStack binStack = getNewStack(10);
	printf("Enter your decimal number: ");
	scanf("%d", &dec);
	
	// processing dec->bin conversion
	int tempDec = dec;
	while(tempDec > 0){
		// int r = tempDec % 2;
		pushStack(&binStack, tempDec % 2);
		tempDec /= 2;
	}
	
	// output conversion result
	int binResult = 0;
	while(!isEmptyStack(binStack)){
		binResult = binResult * 10 + popStack(&binStack);
	}
	
	printf("%d had been coverted to %d in binary.\n", dec, binResult);
}
