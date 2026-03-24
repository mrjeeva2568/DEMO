#include<stdio.h>
int rec(int n){
    if(n==0) return 0;
     rec(n-1);
    printf("%d ",n);
}
int main(){
    int n;
    scanf("%d",&n);
    rec(n);
}