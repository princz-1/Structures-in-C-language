// Write a program to store the data of 3 student.

#include <stdio.h>
#include <string.h>
struct student{
int roll;
float cgpa;
char name[100];
};
int main(void) {
struct student s1;
  s1.roll = 2001;
  s1.cgpa = 9.2;
  strcpy(s1.name,"Prince");

  printf("Student Name :%s\n",s1.name);
  printf("Student Roll no. :%d\n",s1.roll);
  printf("Student Cgpa :%f\n",s1.cgpa);


  struct student s2;
  s2.roll = 2002;
  s2.cgpa = 8.2;
  strcpy(s2.name,"Tushar");

  printf("Student Name :%s\n",s2.name);
  printf("Student Roll no. :%d\n",s2.roll);
  printf("Student Cgpa :%f\n",s2.cgpa);

  struct student s3;
  s3.roll = 2003;
  s3.cgpa = 7.2;
  strcpy(s3.name,"Shubham");

  printf("Student Name :%s\n",s3.name);
  printf("Student Roll no. :%d\n",s3.roll);
  printf("Student Cgpa :%f\n",s3.cgpa);

  return 0;
}
