#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, guess, chances = 5;


    srand(time(0));
    secretNumber = rand() % 20 + 1;

    printf("Welcome to the Guess the Number Game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it!\n");
    printf("Guess the number (between 1 and 20). You have 5 chances!\n");

    for (int i = 1; i <= chances; i++)
        {
        printf("Attempt %d: ", i);
        scanf("%d", &guess);

        if (guess == secretNumber)
            {
            printf("Congratulations! You guessed the number in %d attempt(s)!\n", i);
            break;
            }
         else if (guess < secretNumber)
           {
            printf("Too low!\n");
           }
         else
           {
            printf("Too high!\n");
           }

        if (i == chances) {
            printf("Sorry, you've used all your chances. The number was %d.\n", secretNumber);
        }
    }

    return 0;
}

