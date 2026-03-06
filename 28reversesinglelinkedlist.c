#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main (){
    struct node *head=NULL,*newnode=NULL, *temp=NULL;
    int n,value;
    printf("no.of nodes:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the value:");
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL){
        head=newnode;
        temp=newnode;
    }else{
        temp->next=newnode;
        temp=newnode;
    }
    }
struct node*prev=NULL,*current=head,*next;
while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}
    printf("linked list:");
    head=prev;
    temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    
}