#include <stdio.h>
#include<string.h>
struct student{
  int roll;
  float cgpa;
  char name[100];
};
int main(void) {

  struct student ece = {2010,8.0,"Kunal"};
  printf("Name : %s\n",ece.name);
  printf("Roll n.%d\n",ece.roll);
  printf("CGPA :%f\n",ece.cgpa);


  printf("\n");
  //pointer 
  struct student*ptr = &ece;
    printf("Name :%s\n",(*ptr).name);
    printf("Roll n. :%d\n",(*ptr).roll);
    printf("CGPA :%f\n",(*ptr).cgpa);
printf("\n");
  //Arrow Operator
  printf("Name ->    %s\n",ptr->name);
  printf("Roll n. -> %d\n",ptr->roll);
  printf("CGPA ->    %f\n",ptr->cgpa);
  
  return 0;
}
