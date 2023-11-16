// Using Function

#include <stdio.h>
struct student {
  int roll;
  float cgpa;
  char name[100];
};


void info(struct student s1);
int main(void) {
  struct student s1 = {2001, 8.0, "Prince"};
  info(s1);
  printf("Roll no. :%d\n", s1.roll);
  return 0;
}


// call by value
void info(struct student s1) {
  printf("Student Information\n");
  printf("Name :%s\n", s1.name);
  printf("Roll no. :%d\n", s1.roll);
  printf("CGPA :%f\n", s1.cgpa);
}
