#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
  int data;
  struct Node *next;
};

void AddAtPos(struct Node **phead, int idx , int val ,int len){

    int cnt =0;
    struct Node *trav; 
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
        
      trav = *phead;
      for(int i = 0 ;i<idx-2;i++)
      {
        trav = trav->next;
      
      }
      
      temp->next = trav->next
      trav->next = temp;
    



}

void AddAtEnd(struct Node **phead , int val){

struct Node *trav;
struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
temp->data = val;
temp->next = NULL;

  if(*phead==NULL)
  {
    *phead = temp;
  }else{
  
      trav = *phead;
      
      while(trav->next!=NULL){
          trav = trav->next;
      }
      trav->next = temp;
   
  }

}

 void AddAtBegin(struct Node **phead ,int val){
  
    struct Node *trav1; 
    struct No                                                                                                                de *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
    
    if(*phead==NULL){
        *phead = temp;
       }else{
          temp->next = *phead;
          *phead = temp;
  }

 
 }

void display(struct Node *head){
    
      struct Node *trav = head;
      
      while(trav!=NULL){
        printf("%d ->" , trav->data);
        trav = trav->next;
      }
      printf("NULL");
    printf("\n");
}

int length(struct Node *head){
  
      struct Node *trav = head;
      int cnt = 0; 
      while(trav!=NULL){
        cnt++;
        trav = trav->next;
      }
    return cnt;
}

int main(){
  
  struct Node *head = NULL;
  AddAtEnd(&head , 10);
  AddAtEnd(&head , 30);
  AddAtEnd(&head , 20);
  display(head);
  AddAtBegin(&head , 100);
  display(head);
  printf("length of linked list : %d\n" , length(head));
  
  AddAtPos(&head, 5, 200, length(head));
  display(head);
    

return 0;

}
