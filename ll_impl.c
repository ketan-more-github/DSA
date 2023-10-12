#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{

  int roll;
  char name[20];
  int marks;
  struct student *next; // self refrencial pointer
  
};

int main(){

struct student *p = (struct student*) malloc(sizeof(struct student));
p->roll = 101;
strcpy( p->name  , "gondiya");
p->marks = 75;

printf("%d  %s  %d\n" , p->roll ,p->name ,p->marks);

p->next = (struct student*)malloc(sizeof(struct student));
p->next->roll = 102;
p->next->marks = 35;
strcpy(p->next->name, "akshay");
printf("%d  %s  %d\n" , p->next->roll ,p->next->name ,p->next->marks);

return 0;

}
