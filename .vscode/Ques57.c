// Create a structure to store a vector.Then
// makes a function to return sum of 2 vector.
#include<stdio.h>
#include <string.h>

struct vector {
    int x;
    int y;
};

void Calcsum(struct vector v1, struct vector v2, struct vector sum);

int main(){
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum ={0};

    Calcsum(v1, v2, sum);
    return 0;
}

void Calcsum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of x is : %d\n",sum.x);
    printf("sum of y is : %d\n",sum.y);
}
