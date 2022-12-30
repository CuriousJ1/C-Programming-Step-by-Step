#include <stdio.h>

int main() {

    int i, age;
    age = 78;
    i = (age <= 10 || age >= 60);
    printf("i = %d\n", i);
    return 0;
}