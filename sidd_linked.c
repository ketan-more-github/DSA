#include<stdio.h>
struct Node
  {
      int data;
      struct Node *next;
      struct Node *prev;
  };
  
  void AddAtEnd(struct Node **phead,int val)
    {
      struct Node *temp=(struct Node*)malloc (sizeof(struct Node));
      struct Node *trav;
      temp->data=val;
      temp->next=NULL;
      temp->prev=NULL;
      
      if(*phead==NULL)
        {
          *phead = temp;
        }
      else
      {
       trav =*phead;
       while(p->next!=NULL)
       {
         trev = trav->next;
       }
      }
    }     
    
  
  
  
  int main()
  {
    struct Node *head;
    AddAtEnd(&head);
    Display(head);
    return 0;
  }
