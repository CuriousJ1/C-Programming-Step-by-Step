#include <math.h>

int isPrime(int k){
    int i;
    // need to find factor in the range 2 to sqrt(k), if any factor could be found 
    // then the number is not a prime, otherwise, if no factor is there in the entire 
    // range, then it is a prime number.
    for(i = 2; i <= sqrt(k); ++i){
        if (k % i == 0){
            return 0;
        }
    }
    // no factor in the range, so it is a prime number.
    return 1;
}

//
int sumOfPrime(int lb, int ub){
    int count, sum;

    for(count=lb, sum=0; count<=ub; count++){
        if (isPrime(count))
            sum += count;
    }

    return sum;
}


int main() {

    // int count;

    // for(count=10; count<=100; count++)
    //     if (isPrime(count))
    //         print("%d is Prime\n", count);

    int s;
    s = sumOfPrime(10, 200);
    printf("Sum of primes in the range %d-%d is %d\n: ", 10, 200, s);

    return 0;

}
//---------------- Please do not change anything in the above function.
// --------------------------------------- 
// Write your function just below, please note, the name of the function should be sum_prime
//-----------------------------------------
