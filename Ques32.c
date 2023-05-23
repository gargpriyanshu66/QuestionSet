//WAF to calculate percentage of a student
//from Marks in Science, Maths and Sanskrit.

#include<stdio.h>

float calcpercentage(float science, float maths, float sanskrit);

int main(){
    float science = 98, maths = 87, sanskrit = 96;
    printf("Your's percentage is %f", calcpercentage(science, maths, sanskrit));
    return 0;   
}
//recursive function.
float calcpercentage(float science, float maths, float sanskrit){
    return ((science + maths + sanskrit)/3);
}