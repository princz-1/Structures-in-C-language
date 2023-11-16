// typedef Keyword uses

#include <stdio.h>
#include<string.h>

typedef struct ComputerEngineeringStudent{
int roll;
float cgpa;
char name[100];
}coe; 
int main(void) {
coe s1;
  s1.roll = 2001;
  s1.cgpa = 8.0;
  strcpy(s1.name,"Prince");


  printf("Name :%s\n",s1.name);
  printf("Roll no.:%d\n",s1.roll);
  printf("CGPA :%f\n",s1.cgpa);
  return 0;
}
