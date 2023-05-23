//use library functions to calculate
//the square of a number given by user.

#include<stdio.h>
#include<math.h>


int main(){
    int a;
    float x;
    printf("Enter no. :");
    scanf("%d",&a);

    x=pow(a,2);
    printf("The power is %f",x);
    return 0;
    
}
