#include <stdio.h>

/*
write a recursive function to get the nth number of fibonacci series.
Fibonacci Series: 1 1 2 3 5 8 13 21 34 55 ...

*/

long getFibbTerm(int t){
    if (t==1 || t==2)
        return 1;
    return getFibbTerm(t-1) + getFibbTerm(t-2); // return immeidate previous term
}                                               // then the previous turm to the above
                                                // adds them together
int main(){
    int t;
    for(t = 1; t<=10; t++)                      //for first 10 terms of the fib series
        print("%ld\n", getFibbTerm(t));
    return 0;
}