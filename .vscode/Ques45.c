//write a program to store the first n fibonacci numbers.
//0,1,1,2,3,5,8,13,21,......n
//nth = (n-2)th + (n-1)th

#include<stdio.h>

int main(){
    int n;
    printf("Enter n (n>1) :");
    scanf("%d",&n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;

    for(int i = 2; i<=n ; i++){
        fib[i] = fib[i-2] +fib [i-1]; // important line.
        printf("%d\t",fib[i]);
    }
    printf("\n");
    return 0;
}
