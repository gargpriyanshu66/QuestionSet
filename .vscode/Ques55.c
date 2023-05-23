// write a program to store the data of 3 students.
#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
    
int main() {
    struct student s1;
    s1.roll = 21;
    strcpy(s1.name,"Priyanshu");
    s1.cgpa = 6.80;

    struct student s2;
    s2.roll = 11;
    strcpy(s2.name,"Piyush");
    s2.cgpa = 5.80;

    struct student s3;
    s3.roll = 2;
    strcpy(s3.name,"Paarth");
    s3.cgpa = 9.03;

    printf("Student name is %s\n", s1.name);
    printf("Student roll is %d\n", s1.roll);
    printf("Student cgpa is %f\n", s1.cgpa);
    
    printf("Student name is %s\n", s2.name);
    printf("Student roll is %d\n", s2.roll);
    printf("Student cgpa is %f\n", s2.cgpa);
    
    printf("Student name is %s\n", s3.name);
    printf("Student roll is %d\n", s3.roll);
    printf("Student cgpa is %f\n", s3.cgpa);
    
    return 0;
}