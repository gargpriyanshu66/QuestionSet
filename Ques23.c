// Write a function that prints sum of two no.

#include<stdio.h>

int Sum(int a,  int b);

int main(){
    int a,b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);

    int s=Sum(a,b);
    printf("Sum is %d",s);
    return 0;
}

int Sum(int x, int y){
    return x+y;
}