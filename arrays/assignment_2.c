#include <stdio.h>
#include <math.h>

const int MAX = 10;

int main(){
    
    int n;

    printf("Please note that you can input at most %d digit number\n", MAX);
    
    
    printf("What is the total number of digits in the number? ");
    scanf("%d", &n);

    // check for validity
    if (n>10 || n < 0){
        printf("Invalid input\n");
        printf("What is the total number of digits in the number? ");
        scanf("%d", &n);
    }

    int i;
    int x[n];

    for(i=0; i<n; i++){
        printf("Input next digit: ");
        scanf("%d", &x[i]);
    }

    printf("The number that you gave is: ");

    // concatenate the array values together as strings.
    for(i=0; i<n; i++){ 
        printf("%d", x[i]);
    }

    float m;

    printf("\n");
    printf("Enter a digit >=1 and <=9 to add: ");
    scanf("%f", &m);

    // check for validity for second input
    if (m>10 || m < 0){
        printf("Invalid input\n");
        printf("Enter a digit >=1 and <=9 to add: ");
        scanf("%f", &m);
    }
    

    // factorial of m
    float sum;
    int number = n - 1;

    //printf("%f",pow(10,number));

    for(i=0; i<n; i++, number--){
        sum += x[i] * pow(10,number);
        // printf("%d \n", number);
        // printf("Sum is %f\n", sum);
    }

    sum += m;

    printf("Result: %.0f", sum);

    return 0;
}