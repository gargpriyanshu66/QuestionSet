//Write a pogram to check whether a given letter is upper case or lower case.
#include<stdio.h>

int main() {
    char ch;
    printf("enter character :");
    scanf("%s",& ch);

    if(ch>= 'A' && ch<= 'Z'){
        printf("upper case\n");
    }
    else if (ch>= 'a' && ch<='z'){
        printf("lower case\n");
    }
    else{
        printf("Invalid Input\n");
    }
    return 0;
}