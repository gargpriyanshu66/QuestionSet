//WAP to print factorial (n).

#include<stdio.h>

int fact(int n);

int main(){
    int n;
    printf("Enter the value f n:");
    scanf("%d",&n);

    printf("Fact. is  %d",fact(n));
    return 0;   
}
//recursive function
int fact(int n){
    if(n==1){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}