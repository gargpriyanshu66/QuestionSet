/*
Q. Write a problem to calculate Volume of a Sphere(side take as input).

I have use %f instead of %d for unabrubptly running of the program because it can calculate integer as well as float values.
*/
#include<stdio.h>

int main(){
    printf("I'm here to find the volume of the sphere.\n");

    float radius;
    printf("Please enter the radius of the sphere :");
    scanf("%f",&radius);

    printf("The Volume of the sphere is :%f \n", (4 * 3.14 * pow(radius,3)/3));  //here,I replace a*a with power operator as {pow(x,y) for x to the power y.}
    
    printf("Thank you! have a great day");
    return 0;
}