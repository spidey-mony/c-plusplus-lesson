#include<stdio.h>
#include<conio.h>

#define MAX_QUEUE 5
typedef char* ElementType;
typedef struct{
    int rear;
    unsigned int front;
    ElementType list[MAX_QUEUE];
}StringQueue;

// check wether the queue is empty
int isEmptyQueue(const StringQueue q){
    return(q.front == q.rear + 1);
}
// check wether the queue is full
int isFullQueue(const StringQueue q){
    return (q.rear == MAX_QUEUE - 1);
}
// create empty queue for the initialization
void emptyQueue(StringQueue *q){
    q->rear = -1;
    q->front = 0;
}
// input newItem at the rear posistion
void enqueue(StringQueue *q, const ElementType newItem){
    if(isFullQueue(*q)){
        printf("Queue is full, Cannot add more....\n");
        return;
    }
    q->rear++;
    q->list[q->rear] = newItem;
}
// Output 1 item at the front position
ElementType dequeue(StringQueue *q){
    ElementType frontItem = "";
    if(isEmptyQueue(*q)){
        printf("Queue is empty,No Item anymore....\n");
    }else{
    frontItem = q->list[q->front];
    q->front++;
    }
    return frontItem;
}
// Get total items in the queue
int sizeOfQueue(const StringQueue q){
    return (q.rear - q.front + 1);   // 1 - 0 + 1
}
ElementType getRearItem(const StringQueue q){
    return q.list[q.rear];
}
ElementType getFrontItem(const StringQueue q){
    return q.list[q.front];
}

int main(void){
    StringQueue strList;
    emptyQueue(&strList);

    enqueue(&strList,"Yun Mony");  // front = 1
    enqueue(&strList,"Yun Ratha");  // rear = 1
    enqueue(&strList,"Yun Ratha");  // rear = 2

    printf("Total items before dequeue: %d\n",sizeOfQueue(strList));

    dequeue(&strList); // Output Yun Mony so there is only Yun Ratha in queue
    printf("Total items after dequeue: %d\n",sizeOfQueue(strList));

    enqueue(&strList,"Yun Sophara");
    enqueue(&strList,"Tom Holland");
    enqueue(&strList,"Spider Man");
    printf("Total items: %d\n",sizeOfQueue(strList));

    enqueue(&strList,"Garfield");
   
    printf("The Rear item is: %s\n",getRearItem(strList));
    printf("The Front item is: %s\n",getFrontItem(strList));

    getch();
    return 0;
}