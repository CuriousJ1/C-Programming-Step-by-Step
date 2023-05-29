#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    //declare the array
    int x[n];
    int i;

    srand(time(NULL));
    for(i=0; i<n; i++){
        x[i] = rand() % 100;
    }
    printf("Conent of the array: \n");
    int sum = 0;
    for(i=0; i<n; i++){
        printf("%4d", x[i]);
        sum = sum + x[i];
    }
    printf("\n\n");
    printf("Sum is %d\n", sum);
    // forecfully casting double
    double avg = (double)sum / n;
    printf("Average of the numbers: %f\n", avg);

    return 0;
}