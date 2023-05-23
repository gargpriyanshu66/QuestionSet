//This is Practice Question 4 
//This question is solved with the help of Asssociativity rule.
#include<stdio.h>
#include<math.h>
int main(){
    int a = 5*2-2*3; //prob.1
    printf("%d\n",a);

    int b = 5*2/2*3; //prob.2
    printf("%d\n",b);

    int c = 5*(2/2)*3; //prob.3 In this ques. BRACKET rule is apply which is independent of operators.
    printf("%d\n",c);

    int d = 5+2/2*3; //prob.4
    printf("%d\n",d);
    
    return 0;
}