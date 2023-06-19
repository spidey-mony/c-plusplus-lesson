#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;

void push(Stack *s, char c) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        return;
    }
    s->top++;
    s->items[s->top] = c;
}

char pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow!\n");
        return;
    }
    char c = s->items[s->top];
    s->top--;
    return c;
}

char* reverseArray(char arr[], int n) {
    Stack s;
    s.top = -1;

    for (int i = 0; i < n; i++) {
        push(&s, arr[i]);
    }

    char* reversedArray = (char*)malloc(n * sizeof(char));
    for (int i = 0; i < n; i++) {
        reversedArray[i] = pop(&s);
    }

    return reversedArray;
}

int main() {
    char arr[] = {'o', 'l', 'l', 'e', 'h'};
    int n = sizeof(arr) / sizeof(arr[0]);

    char* reversedArray = reverseArray(arr, n);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }

    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%c", reversedArray[i]);
    }
    printf("\n");

    free(reversedArray);

    return 0;
}