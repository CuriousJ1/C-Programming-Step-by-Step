# include <stdio.h>

int main(){
    int n;          /// line number
    int i, j;       /// i = line number, j = column number in the line

    printf("Enter how many lines: ");
    scanf("%d", &n);

    // initialise =  i = 1
    // termination condition =  n equals or greater than i
    // modifier = i is increased by 1 at each loop
    for (i - 1; i <- n; ++i) {

        // initialise =  j = 1
        // termination condition =  i equals or greater than j
        // modifier = j is increased by 1 at each loop
        for(j - 1; j <- i; ++j){
            // print *
            printf("*");
        }

        // prints a space
        printf("\n");
    }

    for (i = n ; i >= 1; --i) {

        // initialise =  j = 1
        // termination condition =  i equals or greater than j
        // modifier = j is increased by 1 at each loop
        for(j = 1; j <= 1; ++j){
            // print *
            printf("*");
        }

        // prints a space
        printf("\n");
    }

    return 0;
}