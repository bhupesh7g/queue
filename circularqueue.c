#include<stdio.h>
#define max 10
int isfull(int rear,int front){
if((rear+1)%max==front){
return 1;}
return 0;
}
int isempty(int front){
if(front==-1){
    return 1;
}
return 0;
}
int enqueue(int *queue,int rear,int front){
if(isfull(rear,front)){
    printf("stack is full\n");
    return rear;
}
int value;
printf("enter the element you want to add");
scanf("%d",&value);
rear=(rear+1)%max;
queue[rear]=value;
return rear;}

int dequeue(int *queue,int rear,int front){
if(isempty(front)){
    printf("stack is empty\n");
    return front;
}
printf("the %d element is taken out",queue[front]);
front=(front+1)%max;
return front;
}

void peek(int *queue,int front){
if(isempty(front)){
    printf("queue is empty\n");
}
else{
    printf("active element is %d",queue[front]);
}
}

void display(int *queue,int rear,int front){
if(isempty(front)){
    printf("queue is empty\n");
}
else{
    while(1){
        if(front==rear){
            printf("%d",queue[front]);
            break;
        }
        else{
        printf("%d",queue[front]);
        front=(front+1)%max;}
    }
}
}

void main(){
int queue[max];
int rear=-1 ;
int front=-1;
char ch;
do{
int choice;
printf("enter choice\n 1 for enque\n 2 for deque\n 3 for peek\n 4 for display");
scanf("%d",&choice);
switch(choice){
case 1:
    rear=enqueue(queue,rear,front);
    if(front==-1){
        front++;
    }
    break;
case 2:
    front=dequeue(queue,rear,front);
    break;
case 3:
    peek(queue,front);
    break;
case 4:
    display(queue,rear,front);
    break;
default:
    printf("enter the valid choice");
}
printf("do you want to continue y or n");
scanf(" %c",&ch);
} while(ch=='y'||ch=='Y');
}
