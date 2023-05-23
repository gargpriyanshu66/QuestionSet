//Write a problem to calculate Simple Intrest.(values of Time, Principle and Rate. take input from user).
//I have use %f instead of %d for unabrubptly running of the program because it can calculate integer as well as float values.
#include<stdio.h>

int main(){
    printf("hello I'm here to calculate the simple intrest\n");

    float principle, rate, time;
    printf("enter the value of principle :");
    scanf("%f",&principle);

    printf("enter the value of rate :");
    scanf("%f",&rate);

    printf("enter the value of time in multiple of year:");
    scanf("%f",&time);

    printf("The Simple Intrest of this given values is :%f\n",(principle * rate * time)/100);
    
    printf("Thank you! have a chearful day");
    return 0;
}