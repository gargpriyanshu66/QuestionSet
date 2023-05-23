// Make a structur to store bank account
// information of a customer of ABC Bank.
// Also, make an alias for it.

#include <stdio.h>
#include <string.h>

typedef struct bank{
    char name[100];
    int accountNo;
} acc ;

int main(){
    acc acc1 = {"ishu",1235};
    acc acc2 = {"parth",1685};

    printf("\ncust1 acc no = %d and  name = %s\n",acc1.accountNo,acc1.name);
    printf("cust2 acc no = %d and name = %s\n",acc2.accountNo,acc2.name);
    
    printf("\n");
    return 0;
}
