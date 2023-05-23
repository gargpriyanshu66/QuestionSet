//Keep taking number as input from user until user enter an odd number.
#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter n=");
        scanf("%d",&n);

        if(n % 2 != 0){
            break;
        }
    } while(1);

    return 0;

}