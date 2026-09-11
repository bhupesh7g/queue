#include<stdio.h>
#define max 5
int is_empty(int *front,int *rear){
if(*front==-1 || *front>*rear){
return 1;
}
return 0;}

int is_full(int *rear){
if(*rear==max-1){
    return 1;
}
return 0;
}

void enque(int *queue,int *front,int *rear){
if(is_full(rear)){
    printf("stack is full\n");
}
else{
    if(is_empty(front,rear)){
        (*front)++;
    }
    (*rear)++;
    int n;
    printf("enter the element");
    scanf("%d",&n);
    queue[*rear]=n;
}
}

void deque(int *queue,int *front,int *rear){
if(is_empty(front,rear)){
    printf("queue is empty\n");
}
else{
    printf("the element that came out is %d\n",queue[*front]);
    (*front)++;
    if(*front>*rear){
        *front=-1;
        *rear=-1;
    }
}}

void main(){
int front=-1,rear=-1;
int queue[max];
int choice=0;
char ch;
do{
printf("enter the choice \n 1 for enque\n 2 for deque\n 3 to check is_empty\n 4 to check is full");
scanf("%d",&choice);
switch (choice){
case 1:
    enque(queue,&front,&rear);
    break;
case 2:
    deque(queue,&front,&rear);
    break;
case 3:
    if (is_empty(&front,&rear)){
        printf("queue is empty\n");}
    else{
        printf("queue is not empty\n");
    }
    break;
case 4:
    if(is_full(&rear)){
        printf("queue is full\n");}
    else{
        printf("queue is not full\n");
    }
    break;
default:
    printf("enter the valid choice\n");
}
printf("do you wanna continue y or n");
scanf(" %c",&ch);
}while(ch=='y');
}
