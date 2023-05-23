//Write a problem to calculate area of a circle(side take as input).
//I have use %f instead of %d for unabrubptly running of the program because it can calculate integer as well as float values.
#include<stdio.h>

int main(){
    printf("hello I'm here to calculate the area of circle.\n");
    float a;
    printf("Please enter the radius of the circle : ");
    scanf("%f",&a);
    
    printf("Area of the circle is %f\n", 3.14* pow(a,2)); //here,I replace a*a with power operator as {pow(x,y) for x to the power y.}

    printf("Thank you! have a good day");
    return 0;
}