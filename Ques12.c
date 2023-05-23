/*
Will this code: 
int x = 2;
    if(x=1){
        printf("x is equal to 1");
    }
    else{
        printf("x is not equal to 1");
    }
Options are:
a.give error
b.print "x is equal to 1".
c.print "x is not equal to 1".
*/
#include<stdio.h>

int main() {
    int x = 2;
    if(x=1){    //we are not saying that x==1. if it is x=1 it simply replaces the previous value:
        printf("x is equal to 1");
    }
    else{
        printf("x is not equal to 1");
    }
    return 0;
}