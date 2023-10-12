#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node *next;

};

void insertAtEnd(struct Node **head , int value){
        struct Node *p;
        struct Node * temp = (struct Node*) malloc ( sizeof(struct Node));
        temp->data = value;
        temp->next = NULL;

        if(*head==NULL){
            *head = temp;
        }else{
            p = *head;
            while(p->next!=NULL){
                p = p->next;
            }
            p->next = temp;
        }

}
void insertAtbegning(struct Node **head , int value){
        struct Node *trav;
        struct Node * temp = (struct Node*) malloc ( sizeof(struct Node));
        temp->data = value;
        temp->next = NULL;

        if(*head==NULL){
            *head = temp;
        }else{
            trav = *head;
            temp->next = trav;
            *head = temp;
        }

}
void removeAtbegning(struct Node **head){
        
        struct Node *trav;

        if(*head==NULL){
            printf("Linked list is empty ");
        }else{

                trav = *head;
                *head = trav->next ;
                free(trav);           
        }

}
void removeAtend(struct Node **head){
        
        struct Node *trav = *head;
        struct Node *trav2 ;

        if(*head==NULL){
            printf("Linked list is empty ");
        }else{

               trav2=trav->next;
               while(trav2->next!=NULL){
            
                  trav = trav->next;
                  trav2 = trav2->next;
                }
                
                trav->next = NULL;
                free(trav2);
            
        }

}
void removeAtindex(struct Node **head , int idx){
        
        struct Node *trav = *head;
        struct Node *trav2 ;

        if(*head==NULL){
            printf("Linked list is empty ");
        }else{

               trav2=trav->next;

               for(int i =0;i<idx-1;i++){
                trav = trav->next;
                trav2 = trav2->next;
               }

               trav->next = trav2->next;
               free(trav2);   
                  
            }
 }
void insertAtbetween(struct Node **head ,int idx , int value){
        struct Node *trav;
        struct Node * temp = (struct Node*) malloc ( sizeof(struct Node));
        temp->data = value;
        temp->next = NULL;

            trav = *head;
            int i=0;

            while(i!=idx-1){
                i++;
                trav = trav->next;
            }
            
            trav->next = temp;
            temp->next = trav->next;
            

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
int size(struct Node *head){

    struct Node *trav = head;
    int cnt = 0;
    while(trav!=NULL)
    {
        cnt++;
        trav = trav->next;
    }
    return cnt;

}
int main(){
struct Node *head = NULL;
  int ch = 1;
  while(ch!=0){
 
  printf("\n");
  printf("Enter 1 to Insert element at begning in LinkedList\n");
  printf("Enter 2 to Insert element at End in LinkedList\n");
  printf("Enter 3 to Insert element at Between in LinkedList\n");
  printf("Enter 4 to remove element at begning in LinkedList\n");
  printf("Enter 5 to remove element at End in LinkedList\n");
  printf("Enter 6 to remove element at Between in LinkedList\n");
  printf("Enter 7 to Display  LinkedList\n");
  printf("Enter 0 to Exite\n");
  printf("\n");
  scanf("%d" ,&ch);
  
  
  switch(ch){
  
    case 1 :
            int elem;
            printf("Enter the element to insert at begning in linked list\n");
            scanf("%d", &elem);
            insertAtbegning(&head , elem);
            printf("Inserted\n");
            display(head);
             break;
    
    case 2 :
           int elem1;
            printf("Enter the element to insert at end in linked list\n");
            scanf("%d", &elem1);
            insertAtEnd(&head , elem1);
            printf("Inserted\n");
            display(head);
            break;
            
    case 3 :
            int elem2 , idx;
            printf("Enter the element to insert in between in linked list\n");
            scanf("%d", &elem2);
            printf("Enter the index of a element\n");
            scanf("%d", &idx);
            insertAtbetween(&head,idx,elem2);
            printf("Inserted\n");
            display(head);
            break;
            
   case 4 :
             removeAtbegning(&head);
             printf("element is removed from start of linked list\n");
              display(head);
             break;
    
    case 5 :
             removeAtend(&head);
             printf("element is removed from end linked list\n");
            display(head);
             break;
    case 6 :
            int idx1;
            printf("Enter the index of a element to remove in linked list\n");
            scanf("%d", &idx1);
            removeAtindex(&head , idx1);
            printf("element is removed from linked list\n");
            display(head);
             break;
    case 7 :
               printf("linked list elem are \n");
               display(head);
               break;
    
    case 0 :
              exit(0);
  
  }
  
  
  }

return 0;

}
