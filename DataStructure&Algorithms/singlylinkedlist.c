#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node{
    int info;
    struct node *next;
}*start;

void createNewNode(int data){
    struct node *pList,*ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->info=data;
    ptr->next=NULL;

    if(start==NULL)
        start=ptr;
    else 
    {
        pList = start;
        while(pList->next!=NULL)
            pList=pList->next;
        pList->next=ptr;
    }
}

void addAtBegin(int data){
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->info=data;
    ptr->next=start;
    start=ptr;
}

void addAfter(int data,int pos){
    struct node *ptr,*pList;
    pList = start;
    for(int i=0;i<pos-1;++i){
        pList = pList->next;
        if(pList==NULL){
            printf("There are less than %d elements",pos);
            getch();
            return;
        }
        ptr = (struct node*)malloc(sizeof(struct node));
        ptr->next = pList ->next;
        ptr->info = data;
        pList->next=ptr;
    }
}
void Display(){
    struct node *pList;
    if(start == NULL){
        printf("List is empty!!\n");
        return;
    }
    pList=start;
    printf("List is :");
    while(pList!=NULL){
        printf("%d\n",pList->info);
        pList=pList->next;
    }
    printf("\n");
}
int main(void){
    int choice,n,m,position;
    while(1){
        printf("1. Create List\n");
         printf("2. Add at beginning\n");
          printf("3. Add after\n");
           printf("4. Display\n");
           printf("5. Exit\n");
           printf("Enter your choice:");
           scanf("%d",&choice);
           switch (choice)
           {
              case 1:
              printf("How many nodes are you want: ");
              scanf("%d",&n);
              for(int i=0;i<n;++i){
                printf("Enter the elements: ");
                scanf("%d",&m);
                createNewNode(m);
              }
            break;
            case 2:
                printf("Enter the element: ");
                scanf("%d",&m);
                addAtBegin(m);
                break;
            case 3:
                printf("Enter the element: ");
                scanf("%d",&m);
                printf("Enter the position after which this element is inserted:");
                scanf("%d",&position);
                addAfter(m,position);
            case 4:
                Display();
                break;
            case 5:
                exit(0);
                break;
           default:
            printf("Wrong Choice!");
            break;
           }
    }
    return 0;
}