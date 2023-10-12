#include<stdio.h>



int concure(int *arr , int lower , int uppar , int mid){
  
    int merged[50];
    int i , j;
    i = lower;
    j = mid+1;
    int x = 0;    
    while(i<=mid && j<uppar){
      if(arr[i]<=arr[j]){
            
          merged[x++] = arr[i++];
        }else{
            merged[x++] = arr[j++];
        }
      }
      
      while(i<=mid){
        merged[x++] = arr[i++];
      }
      
      
      while(i<=uppar){
        merged[x++] = arr[j++];
      }
      
      for(int ik = 0 , j = lower ; i<sizeof(merged)/4;ik++ ,j++){
          arr[j] = merged[ik];
        }    
    }   
    

 void merge_sort(int * arr , int lower , int uppar){
 
      if(lower<uppar){
      int mid = (lower+uppar)/2;
      merge_sort(arr , 0 , mid);
      merge_sort(arr , mid+1 , uppar);
      concure(arr , lower , uppar , mid); 
      }
  
 }


 void display(int *arr , int size){
        for(int i = 0 ; i<size;i++){
          printf("%d " , arr[i]);
          }
          printf("\n");
      }
      
    
int main(){


 int arr[100]; 
 int size;
 printf("Enter the size of a array \n");
 scanf("%d" , &size);
 
 printf("Enter the  array Elements \n");
 for(int i = 0 ; i<size;i++){
    scanf("%d" ,&arr[i]);
 }
 
 

  merge_sort(arr,0,size-1);
  display(arr , size);
  return 0;

}
