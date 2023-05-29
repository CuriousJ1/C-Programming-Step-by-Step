#include <stdio.h>

int main(){
    char str[80];
    printf("Enter your name: ");
    scanf("%[^A]", str); // Dave

    printf("Welcome, %s\n", str);

    return 0;
}