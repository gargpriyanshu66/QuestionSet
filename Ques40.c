//Enter marks by using arrays.
#include<stdio.h>

int main(){
    float price[3];
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    scanf("%f",&price[3]);

    printf("total price 1 :%f\n",price[1]+(0.18*price[1]));
    printf("total price 2 :%f\n",price[2]+(0.18*price[2]));
    printf("total price 3 :%f",price[3]+(0.18*price[3]));
    
    return 0;
}