#include<stdio.h>

int linear_serch(int *arr , int key , int size){
  
      for(int i = 0;i<size;i++){
        if(key==arr[i]){
          return i;
        }
        }
          return -1;
 }
 
 void sort(int *arr , int s){
 
    for(int i =0;i<s;i++){
      for(int j =0;j<s;j++){
          
          if(arr[i]<arr[j]){
            int temp =  arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
          }
      }
    }
 
 }
 
 int binary_serch(int *arr , int key , int size){
  int mid;
  int si = 0;
  int ei = size-1;
  int i = 0;
  while(si<ei){
         mid= (ei+si)/2;
        if(arr[mid]==key){
          i=mid;
          return i;
          break;
        }
        else if(arr[mid]>key){
            ei = mid-1;
        }
         else if(arr[mid]<key){
            si = mid+1;
        }
  }

  return i;
  
 }


 void display(int *arr , int size){
        for(int i = 0 ; i<size;i++){
          printf("%d " , arr[i]);
          }
          printf("\n");
      }
      

int main()
{

 int idx , n;
 int arr[100]; 
 int size;
 printf("Enter the size of a array \n");
 scanf("%d" , &size);
 
 
 printf("Enter the  array Elements \n");
 for(int i = 0 ; i<size;i++){
    scanf("%d" ,&arr[i]);
 }
 
 

 sort(arr , size);
 display(arr , size);
 
  printf("Enter the Element to serch in a  array \n");
  scanf("%d",&n);
   idx = binary_serch(arr,n,size);
  //idx = linear_serch(arr,n , size);
   if(idx!=-1)
           printf("Element %d found at Index %d\n" , n , idx);
        else
             printf("element not found\n");
         
  display(arr , size);
  return 0;
}
