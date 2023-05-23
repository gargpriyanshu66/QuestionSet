//Write a program to check if a student passedor failed.
//marks>30 is PASS   [Ctrl.+ /:- Comment out]
//Marks <=30 is FAIL
#include<stdio.h>
int main() {
    int marks;
    printf("Please enter your marks(0-100) :");
    scanf("%d",& marks);

    if(marks>= 0 && marks<=30){
        printf("you are FAIL\n");
    }
    else if (marks>30 && marks<=100){
        printf("you are successfully PASS\n");
        printf("Jao jake mithai baato");
    }
    else{
        printf("INVALID input");
    }
    //marks <=30 ? printf("Fail\n") : printf("Passed\n"); // this is solved with the help of tenary operator.
    return 0;
}