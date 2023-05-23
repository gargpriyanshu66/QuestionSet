//Will the address output be same?
#include<stdio.h>
void printAddress(int n);

int main(){
    int n = 4;

    printf("%p\n", &n);
    printAddress(n);
    
    return 0;
}
void printAddress(int n){
    printf("%p\n", &n);
}

//these two are not same because this is call by
//value in this function willl creat new duplicate memory
//of some other address. so, It will print different value.