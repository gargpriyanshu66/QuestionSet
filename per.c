# include<stdio.h>

int main() {
    float a, b, c, d;

    printf("enter a-");
    scanf("%f",& a);

    printf("enter b-");
    scanf("%f",& b);

    printf("enter c-");
    scanf("%f",& c);

    printf("enter d-");
    scanf("%f",& d);

    float sum = a+b+c+d;
    printf("Sum is : %f\n",sum);

    float per = sum/4;
    printf("percentage is : %f\n", per);

    float CGPA= per/9.5;
    printf("CGPA is : %f",CGPA);
    return 0;
}