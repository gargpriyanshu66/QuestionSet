//Keep taking number as input from user until user enter a number which is multiple of 7.
#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter n=");
        scanf("%d",&n);

        if(n%7==0){
            break;
        }
    } while(1);

    return 0;

}