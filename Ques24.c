// Write a function that Table of given no.

#include<stdio.h>

void PrintTable(int n);

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    PrintTable(n); //argument/ actual parameter

    return 0;
}

void PrintTable(int n){ //Parameter /formal parameter
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}