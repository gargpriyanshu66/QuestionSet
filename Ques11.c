/*
Ques.11: Write a Program to give grades to a student:
marks<30 is C
30<= marks <70 is B
70<= marks <90 is A
90<=marks <=100 is A+
*/
#include<stdio.h>
int main() {
    int marks;
    printf("Please enter your marks(0-100) :");
    scanf("%d",& marks);
    
    if(marks<30){
        printf("Grade is C\n");
    }
    else if(marks >= 30 && marks<70){
        printf("Grade is B\n");
    } 
    else if(marks >= 70 && marks<90){
        printf("Grade is A\n");
    }
    else if(marks >= 90 && marks<=100){
        printf("Grade is A+\n");
    }
    else{
        printf("Invalid Input\n");
    }

    printf("Thankyou");
    return 0;
}