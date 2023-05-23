#include<stdio.h>

int main(){
//a. If It's Sunday or It's Snowing ->True
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d\n", isSunday && isSnowing);

//b. If It's Monday or It's Raining ->True
    int isMonday = 0;
    int isRaining = 1;
    printf("%d\n", isMonday || isRaining);
//c. If a number is greater than 9 & less than 100 ->
    int x;
    printf("enter a number ");
    scanf("%d",& x);
    printf("%d\n", x>9 && x<100);
//d. If a number is greater than equal to 9 & less than 100 ->
    int y;
    printf("enter a number ");
    scanf("%d",& x);
    printf("%d\n", y>=9 || y<100);
    return 0;
}