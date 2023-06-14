#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p;
    int n;
    printf("Enter hoe many integer: ");
    scanf("%d", &n);


    p = (int *)malloc(n * sizeof(int));

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

    int new_no = n + 3;

    p = (int *)realloc(p, new_no * sizeof(int));

    if (p == NULL){
        printf("Memory allocated failed.\n");
        exit(1);
    }
    
    *(p+n) = 10;
    *(p+n+1) = 20;
    *(p+n+2) = 30;

    printf("\nNew Content of the array: \n");
    for(i=0; i < new_no; i++){
        printf("%4d", *(p+i));
    }

    free(p);

    return 0;
}