// Make a structure to store Bank Account Information of a customer of ABC Bank , make an alias for it.

#include <stdio.h>
typedef struct BankAccount{
int AccountNo;
char Name[100];
}acc;

int main(void) {
acc acc1 = {123,"prince"};
acc acc2 = {124,"Tushar"};
acc acc3 = {125,"Shubham"};

  printf("acc no.%d\n",acc1.AccountNo);
  printf("Name : %s\n",acc1.Name);

  printf("acc no.%d\n",acc2.AccountNo);
  printf("Name : %s\n",acc2.Name);

  printf("acc no.%d\n",acc3.AccountNo);
  printf("Name : %s\n",acc3.Name);
  return 0;
}
