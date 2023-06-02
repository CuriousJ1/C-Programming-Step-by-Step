#include <stdio.h>

typedef int integer;

typedef struct{
    int roll;
    char name[20];
    double gp;
} Student;

int main(){
    Student s;
    Student *sp;

    sp = &s;

    sp->roll = 15;
    scanf("%[^n]", sp);
    return 0;
}