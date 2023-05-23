# include<stdio.h>

int main() {
    int a, b, c, d;
    printf("enter a-");
    scanf("%d",& a);

    printf("enter b-");
    scanf("%d",& b);

    printf("enter c-");
    scanf("%d",& c);

    printf("enter d-");
    scanf("%d",& d);

    int sum = a+b+c+d;
    printf("Sum is : %d\n",sum);
    return 0;
}