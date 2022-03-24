// Randomly generate numbers between 1 and 1000 for user to guess.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessGame(void);    // function prototype
int isCorrect(int, int); // function prototype

int main(void)
{
    srand( time( 0 ) ); // seed random number generator
    guessGame();
} // end main

// guessGame generates numbers between 1 and 1000
// and checks user's guess
void guessGame(void)
{
    int answer;   // randomly generated number
    int guess;    // user's guess
    int response = 10; // 1 or 2 response to continue game
    int sum = 0;  //sum up how many times computer guess 
    int record[10]={0}; // record the times computer guess
    int k = 0;
    // loop until user types 2 to quit game
    do
    {
        // generate random number between 1 and 1000
        // 1 is shift, 1000 is scaling factor
        answer = 1 + rand() % 1000;
        guess = 500;
        // prompt for guess
        puts("I have a number between 1 and 1000.\n"
             "Can you guess my number?\n"
             "Please type your first guess.");
        printf("%s", "? ");
        printf("%d\n", guess);

        // loop until correct number
        int up = 1000;
        int down = 1;
        
        while (isCorrect(guess, answer))
        {
            if(isCorrect(guess, answer) == 2)
            {
                guess = (guess + 1000) / 2; 
            }
            else
            {
                guess = (guess + 1 ) / 2;
            }

            sum++;
            printf("%d\n", guess);
        }

        // prompt for another game
        printf("\nExcellent! You guessed the number!\nYou have tried %d times\n"
        "Would you like to play again?", sum);
        record[k] = sum;
        printf("%s", "Please type ( 1=yes, 2=no )? ");

        puts("");
        k++;
    } while (response--);//116 210 524 1063 1364 1665 1864 1869 1916 2235

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", record[i]);
    }
} // end function guessGame

// isCorrect returns true if g equals a
// if g does not equal a, displays hint
int isCorrect(int g, int a)
{
    // guess is correct
    if (g == a)
        return 0;

    // guess is incorrect; display hint
    if (g < a)
    {
        printf("%s", "Too low. Try again.\n? ");
        return 1;
    }

    else
    {
        printf("%s", "Too high. Try again.\n? ");
        return 2;
    }

} // end function isCorrect