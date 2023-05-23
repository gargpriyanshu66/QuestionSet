//WAP to sum frist n natural number.

#include<stdio.h>
#include<math.h>

int sum(int n);

int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    printf("Sum is %d",sum(n));
    return 0;   
}
//recursive function
int sum(int n){
    if(n == 1){
        return 1;
    }
    int s = sum(n-1);
    int sumN = s + n;
    return sumN;
}