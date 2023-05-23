//WAF to convert celsius to fahrenheit.

#include<stdio.h>

float temp(float n);

int main(){
    float fahr = temp(37.05);
    printf("Temp. in fahrenheit is  %f", fahr);
    return 0;   
}
//recursive function.
float temp(float n){
    float fahr = n * (9.0/5.0) + 32;
    return fahr;
}