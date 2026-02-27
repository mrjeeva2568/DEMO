#include<stdio.h>
#include<ctype.h>
#include<string.h>
char stack[50];
int top=-1;
int precedence(char ch){
  if(ch=='+'||ch=='-'){
    return 1;
  }else if(ch=='*'||ch=='/'){
    return 2;
  }else if(ch=='^'){
    return 3;
  }
  return 0;
}
void push(char ch){
  top++;
  stack[top]=ch;
}
char pop(){
  return stack[top--];
}
int main (){
  char infix[50],postfix[50];
  int i=0,k=0;
  char ch;
  fgets(infix,sizeof(infix),stdin);
  while((ch=infix[i++])!='\0'){
    if(ch==' '|| ch=='\n'){
      continue;
    }
    if(isalnum(ch)){
      postfix[k++]=ch;
      postfix[k++]=' ';
    }
    else if(ch=='('){
      push(ch);
    }
    else if(ch==')'){
      while (stack[top]!='('){
        postfix[k++]=pop();
        postfix[k++]=' ';
      }
      pop();
    }
    else{
      while(top!=-1 && precedence(stack[top])>=precedence(ch)){
        postfix[k++]=pop();
        postfix[k++]=' ';
      }
      push(ch);
    }
  }
    while(top!=-1){
      postfix[k++]=pop();
      postfix[k++]=' ';
    }
  postfix[k]='\0';
 int s=strlen(postfix);
  for(int i=0;i<s;i++){
    printf("%c",postfix[i]);
  }
 
}