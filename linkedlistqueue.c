#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char name[200];
    struct node *next;
};
struct node *f=NULL,*r=NULL;
struct node *head=NULL,*newnode=NULL;
void enqueue(char s[]){
    
    newnode=(struct node *)malloc(sizeof(struct node));
    strcpy(newnode->name,s);
    newnode->next=NULL;
    if(head==NULL){
        f=newnode;
        head=newnode;
        r=newnode;
    }else{
        r->next=newnode;
        r=newnode;
    }
}
void dequeue(){
    if(f==NULL){
        printf("queue is underflow");
    }else{
        f=head;
        printf("%s ",f->name);
        f=f->next;
    }
}int main(){
    int n;
    scanf("%d",&n);
    int c;
    char b[20];
    for(int i=0;i<n;i++){
        scanf("%d",&c);
        if(c==1){
            scanf("%s",b);
            enqueue(b);
        }else if(c==2){
            dequeue();
        }
    }
}