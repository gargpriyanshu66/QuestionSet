//Ask the user to enter their first Name & print
//it back to them, Also try to print fulll Name.
#include<stdio.h>

int main(){
    char Fname[50];
    char Lname[50];
    char fullname[50];
    // printf("Enter Fname:");
    // scanf("%s",Fname);
    // printf("Enter Lname:");
    // scanf("%s",Lname);
    
    // printf("%s %s",Fname,Lname);

    gets(fullname);
    puts(fullname);
    return 0;
}