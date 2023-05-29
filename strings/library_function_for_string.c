#include <stdio.h>
#include <string.h>

int main(){
    char first[80] = "zebra";
    char second[80] = "cat";

    strcpy(second, first);
    printf("Copied string %s\n", second);
    strcat(first, " ");
    strcat(first, second);
    printf("The first array contains: %s\n", first);

    int i;
    i = strcmp(first, second);

    if (i==0)
        printf("Both are exactly equal\n");
    else if(i<0)
        printf("%s comes first\n", first);
    else 
        printf("%s comes first\n", second); 

    return 0;
}