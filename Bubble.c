#include<stdio.h>


void bubble_sort(int * arr , int len){

  for(int i = 0 ; i<len-1;i++){
  
  for(int j = 0 ; j<len-i-1;j++){
  
      if(arr[j]>arr[j+1]){
        
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
       }
    }
  }

}



void Insertion_sort(int  * arr , int size){

   int i , j ,key;
  for( i= 0;i<size;i++){
     key = arr[i];
      for( j = i-1 ; j>=0 ; j--)
      {
        if(arr[j]>key)
              arr[j+1] = arr[j];
                else
                    break;
      
      }
      arr[j+1] = key;
  
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
 
 
 display(arr , size);
 bubble_sort(arr , size);
 display(arr , size);
 Insertion_sort(arr , size);
 display(arr , size);
return 0;

}
