#include<stdio.h>
#include<math.h>
//Write a program to check if a number is divisivle by 2 or not.
//This program can also be solved for odd or even number.
//even--> 1
//odd--> 0 
int main(){
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    printf("%d",a%2==0); //If true print 1 and If false prnt 0. 
    return 0;
    
}
