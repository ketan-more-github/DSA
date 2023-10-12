#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Node{

  int data;
  struct Node * next;
  struct Node * prev;
};

void insertAtEnd(struct Node **head , int val){

  struct Node *trav; 
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node *));
  temp->data = val;
  temp->next = NULL;
  temp->prev = NULL;
  
  if(*head==NULL){
      *head = temp;
  }else{
    
    trav = *head;
    
    while(trav->next!=NULL){
      trav = trav->next;
    }
    trav->next  = temp;
    temp->prev = trav;
    
    
  }
  
}
void insertAtStart(struct Node **head , int val){

  struct Node *trav; 
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node *));
  temp->data = val;
  temp->next = NULL;
  temp->prev = NULL;
  
  if(*head==NULL){
      *head = temp;
  }else{
     
      (*head)->prev = temp;
      temp->next = *head;
      *head = temp;

  }
  
}

void insertAtBtw(struct Node **head ,int idx,int val){

  struct Node *trav;
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node *));
  temp->data = val;
  temp->next = NULL;
  temp->prev = NULL;
  
      trav = *head;

      int i =0;
      while(i!=idx-1){
          i++;
          trav = trav->next;
      }
        temp->next= trav->next;
        trav->next->prev = temp;
        trav->next = temp;
        temp->prev = trav;
      

}

void display(struct Node *head){

    struct Node *trav = head;

    while(trav!=NULL)
    {
        printf("%d->" , trav->data );
        trav = trav->next;
    }
    printf("NULL");
    printf("\n");

}
void displayRev(struct Node *head){

    struct Node *trav = head;

    while(trav->next!=NULL)
    {
        trav = trav->next;
    }
      printf("reversed Linked link is \n");
      printf("NULL");
    while(trav!=NULL){    
     printf("<-%d" , trav->data );
      trav = trav->prev;
    }
   
    printf("\n");

}



int main(){
struct Node * head = NULL;
insertAtEnd(&head , 10);
insertAtEnd(&head , 100);
display(head);
insertAtStart(&head , 500);
insertAtStart(&head , 50);
insertAtStart(&head , 5);
display(head);
insertAtBtw(&head ,3,5000);
insertAtBtw(&head ,5,6000);
display(head);
displayRev(head);

return 0;

}
