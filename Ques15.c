//Print the numbers from 0 to n, if n is given by the user.
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",& n);

   // this is solved with the help of while loop
    int i=1;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }

    //this is solved using for loop.
    // for(int i=1;i<=n;i++){
    //     printf("%d\n",i);
    // }
    return 0;
}