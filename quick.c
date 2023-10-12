#include<stdio.h>



int Partition(int *arr , int lower , int uppar){

  int i,j,pivot,temp;
  pivot = arr[uppar];
  i = lower-1;
  j = lower;
  
  
  while(j<uppar){
  
      if(arr[j]<pivot)
      {
        i = i+1;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
      j++;
  }
  
  temp = arr[uppar];
  arr[uppar] = arr[i+1];
  arr[i+1] = temp;
  
  
  return i+1;
  
}



 void quick_sort(int * arr , int lower , int uppar){
 
      int q;
      if(lower<uppar){
        q = Partition(arr,lower,uppar);
        quick_sort(arr , lower , q-1);
        quick_sort(arr , q+1 , uppar);
      
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
 
 

  quick_sort(arr,0,size-1);
  display(arr , size);
return 0;

}
