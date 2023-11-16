/* A collections of values of different data types .
  Structure in memory :- Structure are stored in contiguous memory location.
  */
//User defined data type
#include <stdio.h>
#include<string.h>
struct student{
int roll;
float cgpa;
char name[1000];
};
int main(void) {
struct student s1;
  s1.roll = 2001;
  s1.cgpa = 9.2;
  //s1.name = "prince"; Not work
  strcpy(s1.name, "Prince");

  printf("Student Name :%s\n",s1.name);
   printf("Student Roll no. :%d\n",s1.roll);
   printf("Student Cgpa :%f\n",s1.cgpa);
  return 0;
}