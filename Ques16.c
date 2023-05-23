//Print the sum of First n natural Number.
//Also print them in reverse.

#include<stdio.h>
int main(){
    int i, sum, n, j;
    printf("Enter n-");
    scanf("%d",&n);

    sum = 0;
    for(i=1 , j=n ; i<=n , j>=1 ; i++ , j--){
        sum += i; //sum=sum+i.
        printf("%d\n",j);
    }
    printf("Sum is %d\n",sum);
    for(i=n;i>=1;i--){
        printf("%d\n",i);
    }
    
    return 0;
}