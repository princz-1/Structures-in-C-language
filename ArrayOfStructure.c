// Students 

#include <stdio.h>
#include<string.h>
struct student{
int roll;
float cgpa;
char name[100];
};

int main(void) {
struct student it[100];
  it[0].roll = 2001;
  it[0].cgpa = 9.2;
  strcpy(it[0].name,"Prince");

  printf("Name :%s\n",it[0].name);
  printf("Roll no. :%d\n",it[0].roll);
  printf("CGPA :%f\n",it[0].cgpa);

  // Initializing Structures
 struct student ece = {2010,8.0,"Kunal"};
  printf("Name : %s\n",ece.name);
  
  return 0;
}
