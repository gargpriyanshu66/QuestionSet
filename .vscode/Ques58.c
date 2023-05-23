// create a structure to store complex
//number.(use arrow operator)
#include<stdio.h>
#include<string.h>

struct complexNo{
    int real;
    int imag;
};
int main(){
    struct complexNo N1 = {5,8};
    struct complexNo *ptr = &N1;
    printf("real part = %d\n",ptr->real);
    printf("img part = %d\n",ptr->imag);

    return 0; 
}
