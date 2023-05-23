//WAF to print the final price uncluding 18% GST.

#include<stdio.h>

void price(float a);

int main(){
    float a;
    printf("Enter price:");
    scanf("%f",&a);

    price(a);
    return 0;
    
}
void price(float a){
    a = a + (0.18 * a);
    printf("final price is %f",a);
}