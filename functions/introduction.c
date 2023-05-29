#include <stdio.h>

//write a function that calculates simple interest
//on supplying that principal amount, rate of interest
//and duration and returns the interest found to the caller
// simple ineterest = (p * r t) / 100;

double getSimpleInterest(double principal, double rate, double time){
    double interest;
    interest = (principal * rate * time)/100;
    return interest;
}

int main(){
    double p, r, t, i;
    printf("Enter a principal: ");
    scanf("%lf", &p);

    printf("Enter rate of interest: ");
    scanf("%lf", &r);

    printf("Enter a duration: ");
    scanf("%lf", &t);

    i = getSimpleInterest(p, r, t);
    printf("Total Interest: $%0.2lf\n", i);

    return 0;
}