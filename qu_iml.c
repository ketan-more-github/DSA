#include<stdio.h>


struct Queue{

  int arr[50];
  int front;
  int rear;
  int size;

};

init(struct Queue *q){

    q->front = q->rear =-1;
    q->size = 20;
}

void insert(struct Queue *q , int val){

      if(!is_full(q)){
      
        q->rear = q->rear+1;
        q->arr[q->rear] = val;
      }
      else
      {
        printf("Queue is full\n");
      }

}

int remove_ele(struct Queue *q){

      int temp = -1;
      if(!is_empty(q)){
      
        q->front = q->front+1;
        temp = q->arr[q->front]; 
      }
      else
      {
        printf("Queue is empty\n");
      }
  return temp;
}

int is_full(struct Queue *q){
      
      if(q->rear==(q->size)-1)
      {
        return 1;
      }else{
      return 0;
      }
  
}

int is_empty(struct Queue *q){

      if(q->front==q->rear)
      {
        return 1;
      }else{
      return 0;
      }
}

int main()
{

  struct Queue q;
  init(&q);
  insert(&q , 10);
  insert(&q , 20);
  insert(&q , 30);
  printf("%d\n" , remove_ele(&q));
  printf("%d\n" , remove_ele(&q));
  printf("%d\n" , remove_ele(&q));

}


