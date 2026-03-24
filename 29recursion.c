
#include<stdio.h>
int rec(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    return rec(n-1)+rec(n-2);
  
}
int main(){
    int n;
    scanf("%d",&n);
    printf("Fibonacci series: \n");
    for(int i=0;i<=n;i++){
        printf("%d ",rec(i));
    }
    
}