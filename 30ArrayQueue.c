#include<stdio.h>
#include<string.h>
# define max 200
int q[max];
int rear=-1,front=-1;
void enqueue(int c){
    if(rear==max-1){
        printf("Queue is overflow");
    }else{
        if(front==-1){
            front=0;
        }
        q[++rear]=c;
    }
}
void dequeue(){
    if(front==-1||front>rear){
        printf("Queue is Underflow");
    }
    else{
        printf("%d",q[front]);
        front++;
    }
}
void display(){
    if(front==-1||front >rear){
        printf("Queue is empty");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",q[i]);
        }
    }
}
int main(){
    int val;
    int n;
    char op[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",op);
        if(strcmp(op,"enqueue")==0){
            scanf("%d",&val);
            enqueue(val);
        }
        else if(strcmp(op,"dequeue")==0){
            dequeue();
        }else if(strcmp(op,"display")==0){
            display();
        }
    }
}