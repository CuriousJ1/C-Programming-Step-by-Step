#include <stdio.h>

int main(){
    int r,c;
    //r is no of salesperson, c is no of items that they sale
    // input for r and c
    printf("Enter a number of salesperson: ");
    scanf("%d", &r);
    printf("Enter the number of items: ");
    scanf("%d", &c);
    printf("\n\n\n");

    //declare 2nd array
    double saleData[r][c];
    //input saledata into the array
    printf("Enter sale data: \n\n");
    int i, j;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Sale amt for salesperson no %d item no %d: ", i+1, j+1);
            scanf("%lf", &saleData[i][j]);
        }
    }
//display report.
printf("---------------------------------------\n");
printf("Sale data\n");
printf("---------------------------------------\n\n");
double total = 0.0;
double comm;

for(i=0; i<r; i++){
    printf("Sale data for salesperson no. %d\n", i+1);
    printf("---------------------------------------\n");
    total = 0.0;
    for(j=0; j<c; j++){
        printf("\tItem %d:   $%0.2lf\n", j+1, saleData[i][j]);
        total += saleData[i][j];
    }
printf("tTotal  :   $%0.2lf\n", total);
comm = 0.1 * total;
printf("\tComm :  $%0.2lf\n", comm);
printf("\n\n");
}

return 0;
}