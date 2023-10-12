#include<stdio.h>
#include<stdlib.h>


struct circ_q{

  int arr[10];
  int front;
  int rear;
  int size;

};

void display(struct circ_q *cq){

  for(int i = cq->front+1 ;i<cq->rear; i++)
  {
   printf("%d ",cq->arr[i] );
  }

}

void init(struct circ_q *cq , int s){
    cq->size =s;
    cq->front=cq->rear=cq->size-1;
 
}

int insert(struct circ_q *cq , int val){

       int cnt = 0; 
      if(!is_full(cq)){
      
        cq->rear = (cq->rear+1)%cq->size;
        cq->arr[cq->rear] = val;
      
      }
      else
      {
        printf(" Circular Queue is full\n");
        cnt++;
      }
    return cnt;
}

int remove_ele(struct circ_q  *cq){

      int temp = -1;
      if(!is_empty(cq)){
      
        cq->front = (cq->front+1) % cq->size;
        temp = cq->arr[cq->front]; 
      }
      else
      {
        printf("Queue is empty\n");
      }
  return temp;
}

int is_full(struct circ_q *cq){
      
      if(cq->front==(cq->rear+1)%cq->size)
           return 1;
      else
          return 0;
      
  
}

int is_empty(struct circ_q *cq){

      if(cq->front==cq->rear)
      {
        return 1;
      }else{
      return 0;
      }
}

int main()
{
  int size;
  int ch = 1;
  printf("Enter the size of a Circular Queue\n");
  scanf("%d" , &size);
  struct circ_q  q;
  init(&q , size);
  
  while(ch!=0){
 
  printf("Enter 1 to Insert element in Circular Queue\n");
  printf("Enter 2 to remove element in Circular Queue\n");
  printf("Enter 3 to Display Circular Queue\n");
  printf("Enter 0 to Exite\n");
  scanf("%d" ,&ch);
  
  
  switch(ch){
  
    case 1 :
            int elem;
            printf("Enter the elements to insert in a circular queue\n");
            scanf("%d", &elem);
            if(insert(&q , elem==1))
            {
                exit(0);
            } 
             break;
    
    case 2 :
            int temp = remove_ele(&q);
             printf("Element %d is remove from circular queue\n" , temp);
              break;
    case 3 :
              printf("Circular queue elements are\n");
              display(&q);
              break;
    
    case 0 :
              exit(0);
  
  }
  
  
  }

return 0;
}


