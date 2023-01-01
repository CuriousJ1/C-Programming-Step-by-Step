#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 13 && age <= 19? printf("Yes, teen age"):printf("No, not a teen");
}