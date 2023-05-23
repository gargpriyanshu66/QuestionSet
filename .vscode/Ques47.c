//Create a string first name &last name to store details of user and print all the charactes using a loop.
#include<stdio.h>
void strings(char arr[]);
int main(){
    char fname[]="Priyanshu";
    char lname[]="garg";

    strings(fname);
    
    strings(lname);

    return 0;
}
void strings(char arr[]){
    for(int i = 0; arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
}