#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p;
    int n;
    printf("Enter hoe many integer: ");
    scanf("%d", &n);


    p = (int *)malloc(100);

    if (p==NULL){
        printf("Unable to allocate memory\n Exiting the program\n");
        exit(1);
    }

    //use the allocated space pointed by p for keeping values

    int i;
    for(i=0; i<n; i++){
        printf("Next number: ");
        scanf("%d", p+i);
    }

    printf("Content of the array: ");
    for(i=0; i<n; i++){
        printf("%4d", *(p+i));
    }
    
    return 0;
}