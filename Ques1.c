//Write a program to calculate the area of square.
//I have use %f instead of %d for unabrubptly running of the program because it can calculate integer as well as float values.
#include<stdio.h>

int main(){
    printf("hello I'm here to calculate the area of square.\n");

    float a;
    printf("Please enter the sides of square: "); // here, I used to display this.
    scanf("%f",&a); // here, I use to take the input from the user.

    printf("The area of square is: %f\n",pow(a,2)); // I used product rule to solve.
    printf("Thank you! have a good day");
    return 0;
}