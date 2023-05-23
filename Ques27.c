//WAP to calculate area of a square,
// a circle, a rectangle.

#include<stdio.h>
float areasquare(float side);
float areacircle(float rad);
float arearectangle(float a, float b);

int main(){
    float a, b, rad, side;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter rad:");
    scanf("%f",&rad);
    printf("Enter side:");
    scanf("%f",&side);

    printf("\narea of square is %f",areasquare(side));
    printf("\narea of circle is %f",areacircle(rad));
    printf("\narea of rectangle is %f",arearectangle(a,b));

    return 0;   
}
float areasquare(float side){
    return side*side;
}
float areacircle(float rad){
    return 3.14*rad*rad;
}
float arearectangle(float a, float b){
    return a*b;
}