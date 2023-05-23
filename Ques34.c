// find output.
#include<stdio.h>
int main(){
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("\nx= %d",x);
    printf("\n*ptr= %d",*ptr);

    *ptr += 5;
    printf("\nx= %d",x);
    printf("\n*ptr= %d",*ptr);

    (*ptr)++;
    printf("\nx= %d",x);
    printf("\n*ptr= %d",*ptr);

    return 0;
}