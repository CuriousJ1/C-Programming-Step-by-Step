
#include <stdio.h>  
#include <time.h>   
#include <stdlib.h> 

int main(){
  printf("***********************************************************\n");
  printf("**----------------Welcome to Guessing Game---------------**\n");
  printf("**---------You can guess if you understand the MATH -----**\n");
  printf("**---------------------------------------------------------\n");
  printf("\n\n");

  const int MAX_CHANCES = 7;  
  int computer_guess;  
  long seed = time(NULL);
  srand(seed);

  computer_guess = rand() % 100;

  // Prompt the user
  printf("Program has guessed a number, what you need to do is match it.\n");
  printf("Remember, you have only 7 chances.\n");
  printf("Best wishes...\n\n");

  int user_guess; 
  int chance_count = 1; 
  int match = 0;
  int remaining_chances_count = 6;        

  
  while(match != 1 && chance_count != 7){ 
    printf("Enter your number: ");
    scanf("%d", &user_guess);
    if (user_guess > computer_guess){                   
      printf("Your guess is high\n");
      printf("Number of Remaining chances: %d\n", (--remaining_chances_count));
    }
    else if(user_guess < computer_guess){             
      printf("Your guess is low \n");
      printf("Number of Remaining chances: %d\n", (--remaining_chances_count));
    }
    else{
        printf("Bingo!! You have won the game.");
        printf("You guessed that in %d chances\n", chance_count);
        ++match;
    }

	if (match != 1){
		++chance_count;  
	}
	
	printf("\n\n");
  } 
  
  if (match != 1){               
    printf("Game Over");           
  }
  return 0;
}


/********************* EXTRA CREDIT ************************/
// Attempt this extra credit section only if you completed the normal
// section. Otherwise no extra credit will be give.
// Total Extra credit - 15.

// you need to print some extra messages depending upon the number of
// chances user took to find the guess.

// If the user guessed the number successfully in <=3 steps, print, "You are Super Duper NINJA!"
// If the user guessed the number successfully in >3 and <=5 print, "You are Crezy NINJA!"
// If the user guessed the number successfully in 6 or 7 steps print, "You have potential to be a NINJA!"

// --------------------------------------------------------//



//****************  Example Output *****************************/
// This is how the program is suppose to run.
/*

***********************************************************
**----------------Welcome to Guessing Game---------------**
**---------You can guess if you understand the MATH -----**
**---------------------------------------------------------


Program has guessed a number, what you need to do is match it.
Remember, you have only 7 chances.
Best wishes...

Enter your number: 67
Your guess is low
Number of remaining chances: 6


Enter your number: 89
Your guess is high
Number of remaining chances: 5


Enter your number: 70
Your guess is low
Number of remaining chances: 4


Enter your number: 79
Your guess is high
Number of remaining chances: 3


Enter your number: 76
Your guess is low
Number of remaining chances: 2


Enter your number: 78
Bingo!! You got it correct 78 is the number
You guessed that in 6 chances



Press any key to continue . . .
*/

// Another Example Output
/*

***********************************************************
**----------------Welcome to Guessing Game---------------**
**---------You can guess if you understand the MATH -----**
**---------------------------------------------------------


Program has guessed a number, what you need to do is match it.
Remember, you have only 7 chances.
Best wishes...

Enter your number: 40
Your guess is low
Number of remaining chances: 6


Enter your number: 60
Your guess is high
Number of remaining chances: 5


Enter your number: 50
Your guess is high
Number of remaining chances: 4


Enter your number: 45
Your guess is low
Number of remaining chances: 3


Enter your number: 47
Your guess is low
Number of remaining chances: 2


Enter your number: 48
Your guess is low
Number of remaining chances: 1


Enter your number: 49
Bingo!! You got it correct 49 is the number
You guessed that in 7 chances



Press any key to continue . . .






*/
