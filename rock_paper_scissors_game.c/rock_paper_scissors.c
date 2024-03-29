#include <stdlib.h>

#define ROCK 1
#define PAPER 2
#define SCISSOR 3
#define PLAYER1_WIN 1
#define PLAYER2_WIN 2
#define DRAW 0

int rock_paper_scissor(int player1, int player2){
    int result;
    if (player1 == ROCK && player2 == PAPER){
        result = PLAYER2_WIN;
    }
    else if (player1 == ROCK && player2 == SCISSOR){
        result = PLAYER1_WIN;
    }
    else if (player1 == PAPER && player2 == ROCK){
        result = PLAYER1_WIN;
    }
    else if (player1 == PAPER && player2 == SCISSOR){
        result = PLAYER2_WIN;
    }
    else if (player1 == SCISSOR && player2 == ROCK){
        result = PLAYER2_WIN;
    }
    else if (player1 == SCISSOR && player2 == PAPER){
        result = PLAYER1_WIN;
    }
    else{
        result = DRAW;
    }
    return result;
}

int get_user_input(){
    int choice;
    do{
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        printf("Please input [1,2,3]: ");
        scanf("%d", &choice);
        if (! (choice>=1 && choice <=3 )){
            printf("ERROR -- Invalid input, should be 1 or 2 or 3 ");
        }
    }while ( !(choice >=1 && choice <=3));
}

int main()
{
    int user_score = 0;
    int computer_score = 0;
    srand(time(NULL));

    int quit = 0;
    while(!quit){

        int user_input = get_user_input();
        int computer_choise = (rand() % 3) + 1;
        printf("Compuer chose: ");
        print_word(computer_choise);
        printf("User chose: ");
        print_word(user_input);

        int result = rock_paper_scissor(user_input, computer_choise);
        if (result == DRAW){
            printf("User wins and computer lost the game\n");
            user_score++;
        }
        else if (result == PLAYER1_WIN){
            printf("User wins and computer lost the game\n");
            user_score++;
        }

        else if (result == PLAYER2_WIN){
            printf("Computer wins and user lost the roung\n");
            computer_score++;
        }

        printf("User score: %d\n", user_score);
        printf("Compuer score: %d\n", computer_choise);

        printf("If you want to continue input any integer, 0 to terminate. ");
        int response;
        scanf("%d", &response);
        if (response == 0){
            quit = 1;
        }
    }
}