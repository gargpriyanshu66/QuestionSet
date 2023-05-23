//make a proogram that inputs user's name and print its length.
#include<stdio.h>

int countname(char arr[]);

int main(){
    char name[100];
    fgets(name,100,stdin);

    printf("length is :%d", countname(name));
    return 0;
}
int countname(char arr[]){
    int count = 0;
    for ( int i=0; arr[i] != '\0' ; i++){
        count ++;
    }
    return count-1;
}