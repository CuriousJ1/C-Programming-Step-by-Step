#include <stdio.h>

// SUN = 0, MON = 1....... SAT = 7
typedef enum{
     SUN, MON, TUE, WED, THURS, FRI, SAT
}days_of_week;

typedef enum{
    FALSE, TRUE
}Boolean;

Boolean isEVEN(int n){
    if (n%2 == 0)
        return TRUE;
    else
        return FALSE;
}

int main(){
    days_of_week day = SAT;
    //....

    if (day == SAT || day == SUN)
        printf("Holiday\n");
    else
        printf("Not holiday");
    return 0;
}