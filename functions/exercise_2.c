#include <stdio.h>

int is_digit_char(char ch){
    // Instruction: Check if ch is a digit character or not, 
    // if ch is a digit character then return 1, otherwise return 0

    // NOTE - convert the numerical values to a string for this as its in char
    if(ch >='0' && ch <='9'){
        return 1;
    }

    else{
        return 0;
    }

}



int main(){

    char str = '\0';
    int i;

    printf("Enter a object: ");
    scanf("%[^\n]", &str);

    i = is_digit_char(str);
    printf("%d", i);

    return 0;
}
