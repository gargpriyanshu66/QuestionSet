//int arr[] = {1,2,3,4,5}
//for the given array, what will the following give ?
//a.  *(arr+2).
//b.  *(arr+5).
#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};

    printf("%d\t",*(arr+2));
    printf("%d\t",*(arr+5));

    return 0;
}