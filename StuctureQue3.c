// Create a structure to store complex numbers (use arrow operator)

#include <stdio.h>
#include<string.h>
struct complex{
int real;
int img;
};

int main(void) {
struct complex number1 = {5,8};
struct complex *ptr = &number1;
  printf("Real part :%d\n",ptr->real);
  printf("img part :%d\n",ptr->img);
  return 0;
}
