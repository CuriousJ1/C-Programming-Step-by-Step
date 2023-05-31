#include <stdio.h>

int main(){
    //Ask the user of the program to input number of rows and columns for the matrix
    //      row number >=3 and <=10
    //      column number >=3 and <=10        
    // if input does not go through the validity, print error message and terminate
    int x, y;
    
    printf("Enter number of rows for the matrix (>=3 and <=10): ");
    scanf("%d", &x);
    printf("\n");

    // check for validity
    if(x <3 || x >=10){
       printf("\n");
       printf("Invalid number of rows, acceptable is >=3 and <=10");
       printf("\n");
       return 0;
    };

    printf("Enter number of columns for the matrx(>=3 and <=10):  ");
    scanf("%d", &y);
    printf("\n");

    // check for validity
    if(y <3 || y >=10){
       printf("\n"); 
       printf("Invalid number of columns, acceptable is >=3 and <=10");
       printf("\n");
       return 0;
    };

    // decalare the 2 dimension array where you input a number for each co ordinate
    int array[x][y];
    int i, j;
    int value;

    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            // note that you cannot have a decimal being
            // array[i]
            printf("Matrix [%d][%d]: ", i, j);
            scanf("%d", &value);
            array[i][j] = value;
        }
    }

    // initial matrix
    printf("Marix as given by you ");
    printf("\n");
    
    // rows
    for(i=0; i<x; i++){
        //columns
        for(j=0; j<y; j++){
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // transposing of array
    printf("Transpose of the given matrix");
    printf("\n");
    
    // rows
    for(i=0; i<y; i++){
        //columns
        for(j=0; j<x; j++){
            printf("%4d", array[j][i]);
        }
        printf("\n");
    }
    //int transpose_array[y][x];

    return 0;
};