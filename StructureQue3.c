//Create a structure to store vactors. Then make a function to return sum of 2 vactors.

#include <stdio.h>
struct vactors{
int x;
int y;
};

void calcSum(struct vactors v1,struct vactors v2,struct vactors sum);

int main(void) {
struct vactors v1 = {5,10};
struct vactors v2 = {3,7};
struct vactors sum = {0};  
  calcSum(v1,v2,sum);
return 0;
}

void calcSum(struct vactors v1,struct vactors v2,struct vactors sum){
  sum.x = v1.x + v2.x;
  sum.y = v1.y + v2.y;

  printf("Sum of x is :%d\n",sum.x);
  printf("Sum of y is :%d\n",sum.y);
  
}

