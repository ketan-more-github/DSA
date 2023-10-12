#include<stdio.h>
#include<stdlib.h>



struct Node {

int data;
struct Node * left;
struct Node * right;

};


void insert(struct Node **proot , int val)
  {
      struct Node *trav = NULL;
      struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
      temp->data = val;
      temp->left = temp->right = NULL;


      if(*proot==NULL)
           *proot = temp;
      else
      {      
            trav = *proot;
            
              while(1)
              {
                  if(trav->data > temp->data)
                  { 
                      
                      if(trav->left==NULL)
                      {
                        trav->left = temp;
                        break;
                      }
                         else
                         trav= trav->left;
                   }     
                        
                      else if(trav->data < temp->data)
                      {
                             if(trav->right==NULL){
                              trav->right = temp;
                              break;
                               }
                          else
                              trav=trav->right;
                      
                      }else
                            break;
                  }
                  
              
              }
      }



void inorder(struct Node *trav){

    if(trav!=NULL){
    
        inorder(trav->left);
        printf("%d " , trav->data);
        inorder(trav->right);
    }

}
void preorder(struct Node *trav){

    if(trav!=NULL){
    
        printf("%d " , trav->data);
        preorder(trav->left);
        preorder(trav->right);
    }

}
void postorder(struct Node *trav){

    if(trav!=NULL){
        postorder(trav->left);
        postorder(trav->right);
        printf("%d " , trav->data);
    }
}

int main(){

struct Node *root;

insert(&root , 50);
insert(&root , 24);
insert(&root , 30);
insert(&root , 13);
insert(&root , 23);



preorder(root);
printf("\n");
postorder(root);
printf("\n");
inorder(root);
printf("\n");



return 0;
}
