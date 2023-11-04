#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    
    int guess;
    int attempts = 0;
    int maxAttempts = 10;

    printf("Welcome to the Guess the Number game!\n");
    printf("I've selected a secret number between 1 and 100.\n");
    printf("BOOOOOOM !!! LET THE GAME BEGIN .....GOOD LUCK ....\n");
    printf("TRY GUESSING THE NUMBER \n");

    while (attempts < maxAttempts) 
    {
        printf("Enter your guess (attempt %d): ", attempts + 1);
        scanf("%d", &guess);

        if (guess < 1 || guess > 100)
         {
            printf("ULLU 1 TO 100 KE BEECH ME HI GUESS KRO ....\n");
            continue;
        }

        if (guess < secretNumber) 
        {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber)
         {
            printf("Too high! Try again.\n");
        } else
         {
            printf("Congratulations! You guessed the secret number %d in %d attempts!\n", secretNumber, attempts + 1);
            break;
        }

        attempts++;
    }

    if (attempts >= maxAttempts) 
    {
        printf("Sorry, you've run out of attempts. The secret number was %d.\n", secretNumber);
    }

    return 0;
}
