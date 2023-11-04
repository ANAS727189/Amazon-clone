#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int RockPaperScissor( char you , char comp)
{
    if(you == comp)// Draw
    {
        return 0;
    }
      


     if(you == 'r' && comp == 'p')
    {
        return -1;
    }
     else if(you == 'p' && comp == 'r')
    {
        return 1;
    }
    
     if(you == 'r' && comp == 's')
    {
        return 1;
    }
    else if(you == 's' && comp == 'r')
    {
        return -1;
    }
   
     if(you == 'p' && comp == 's')
    {
        return -1;
    }
    
   
    else if(you == 's' && comp == 'p')
    {
        return 1;
    }
}
int main()
{
    char you , comp;
     int number;
    srand(time(0));
    number = rand()%100 + 1;
    if(number < 33)
    {
        comp = 'r';
    }
     else if(number>=33 && number < 66)
     {
        comp = 'p';
     }
     else if(number >= 66)
     {
        comp = 's';
     }
     printf("WELCOME TO THE WORLD OF  ROCK PAPER SCISSOR \n");
     printf("LETS ROCK AND ROLL ...THE GAME BEGINS ....BOOOOOM !!!!...");
    printf("Enter r for rock , p for paper and s for scissor to play the game :\n");
    scanf("%c" , &you);
    int result = RockPaperScissor(you , comp);
    printf("You choose %c and computer choose %c\n" , you , comp);
    if(result == 0)
    {
        printf("DRAW !!!...TOUGH COMPETITION.. TRY ONE MORE ATTEMPT\n");
    }
    else if(result == 1)
    {
        printf(" YOU WIN !!! ...ITS PARTY TIME ...\n");
    }
    else if(result == -1)
    {
        printf(" YOU LOSE !!! ...BETTER LUCK NEXT TIME .\n");
    }
    return 0;
}
