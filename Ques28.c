//WAP to print Hello World 5
//times without using loops.

#include<stdio.h>
void hello(int count);

int main(){
    hello(5);
    return 0;   
}
void hello(int count){
    if(count == 0){
        return;
    }
    printf("Hello World\n");
    hello(count-1);
}