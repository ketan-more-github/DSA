
#include<stdio.h>

struct stack{

  int top;
  int arr[20];
  int size

};

 void init(struct stack *s){
    
       s->top = -1;
       s->size = 10;
 }
 
 void push(struct stack *s , int val){
 
      if(!isfull(s)){
        s->top = s->top+1;
        s->arr[s->top]=val;
      }else{
        printf("stack is full\n");
      }
 
 }
  int pop(struct stack * s){
        int temp = -1;
      if(!isEmpty(s)){
        temp = s->arr[s->top];
        s->top--;
      }else{
        printf("stack is empty\n");
      }
    return temp;
 }
 
 int isfull(struct stack * s){
 
    if(s->top == s->size-1){
      return 1;
    }
    else{
    return 0;
    }
 }
 int isEmpty( struct stack *s){
    
    if(s->top==-1){
      return 1;
    }
    else{
    return 0;
    }
  
 }


int main(){

  struct stack st;
  init(&st);
  struct stack st2;
  init(&st2);
  int num;
  printf("Enter a number to gets its palindrome number\n");
  scanf("%d",&num);
  
  while(num!=0)
  {
    int temp = num%10;
    push(&st , temp);
    num = num/10;
  }
     printf("palindrome is = ");
  while(!isEmpty(&st)){
      push(&st2 ,pop(&st));
  }
   while(!isEmpty(&st2)){
      printf("%d" , pop(&st2));
  }
   printf("\n");

return 0;
}
