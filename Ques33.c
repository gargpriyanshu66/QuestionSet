// WAF to print nn terms of the fibonacci sequence.

#include<stdio.h>
#include<stdatomic.h>

int fibonacci(int n);

int main(){
    printf("%d", fibonacci(6));
    return 0;
}
int fin(int n){
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
    
    int fibNm1 = fibonacci(n-1);
    int fibNm2 = fibonacci(n-2);
    int fibN = fibNm1 + fibNm2;
    // printf("fin of %d is : %d",fibN);
    return fibN;
}