#include <stdio.h>
//prototype declarations
//declare these variables as you do not know the flow of the program
int is_lower_case(char);
int is_upper_case(char);
char to_upper__case(char);
char to_lower_case(char);

char to_lower_case(char ch){
    if (is_upper_case(ch))
        return ch + 32;
    else
    return ch;
}

char to_upper_case(char ch){
    if (is_lower_case(ch))
        return ch - 32;
    else    
        return ch;
}

int is_lower_case(char ch){
    if (ch>='a' && ch<='z')
        return 1;
    else
        return 0;
}

int is_upper_case(char ch){
    if (ch>'A' && ch<='Z')
        return 1;
    else
        return 0;
}

//test cases
int main(){
    char k;

    k = 'A';
    k = to_lower_case(k);
    printf("Lower case equivalent: %c\n", k);

    k = 'q';
    k = to_upper_case(k);
    printf("Upper case equivalent: %c\n", k);

    return 0;
}