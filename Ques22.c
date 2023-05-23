// Write a function that prints Namaste if user
// is Indian & Bonjour if that user is French.

#include<stdio.h>

void Namaste();
void Bonjour();
int main(){
    char ch;
    printf("Enter i for indian and f for french.");
    scanf("%c",&ch);

    if(ch=='i'){
        Namaste();
    }

    else if(ch=='f'){
        Bonjour();
    }
    else
    printf("Invalid Input\n");
    return 0;
}
void Namaste(){
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour\n");
}