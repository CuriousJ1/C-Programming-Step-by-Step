#include <stdio.h>
#include <string.h>

int main(){
    char str[80];

    strcpy(str, "Hello World");

    printf("Message is: %s\n", str);

    char str1[] = "Hello Candy";
    strcpy(str, str1);
    printf("Message is: %s\n", str);

    return 0;
}