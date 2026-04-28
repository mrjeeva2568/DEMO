#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *creationtree(){
    int x;
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=creationtree();
    newnode->right=creationtree();
    return newnode;
}
void inorder(struct node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int main(){
    struct node *root=creationtree();
    printf("Inorder Recursion Tree:");
    inorder(root);
}