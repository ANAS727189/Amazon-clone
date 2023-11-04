#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int number , guess , nguesses = 1;
    srand(time(0));
    number = rand()%100 + 1;
    //printf("The number is %d\n" , number);
    do
    {
        printf("WELCOME TO THE WORLD OF GUESSING GAME ....\n");
        printf("BOOOOOM!!!! LETS BEGIN THE GAME ...GOOD LUCK ..\n");
        printf("Guess the number between 1 to 100 \n");
        scanf("%d" , &guess);
        if(guess>number)
        {
            printf("Lower number please!!!!! \n");
        }
        else if(guess< number)
        {
            printf("Higher number please!!!! \n");
        }
        else{
            printf("CONGRATULATIONS !!!!! ITS PARTY TIME .....You guessed it in %d attempts " , nguesses);
        }
        nguesses ++;

    } while (guess != number);
        
    return 0;
    
}