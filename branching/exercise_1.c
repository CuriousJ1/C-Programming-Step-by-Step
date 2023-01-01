#include <stdio.h>


int main() {

    int var;
    printf("Input a number of neighbours 0 ");
    scanf("%d", &var);

    if (var == 0)
        printf("Sad and will for you to listen to his story, will make you late.");
    else if (var == 1)
        printf("He will ask you to deliver half of the pizza to his only neighbour, you may be late.");
    else if (var >=2 && var <=5)
        printf("Will have great mood and will be singing song. May crack joke as well. You will get good tips, definitely.");
    else if (var == 7)
        printf("He will be making great drink for his neighbour and will invite you to taste. But will not give you tip.");
    else if (var == 6 || var == 8)
        printf("Too angry and furious, delver the pizza and leave ASAP.");
    else {
        printf("Invalid number of neighours");
    }
    return 0;
}