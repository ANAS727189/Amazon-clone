#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int SnakeWaterGun( char you , char comp)
{
    if(you == comp)// Draw
    {
        return 0;
    }
      


     if(you == 's' && comp == 'w')
    {
        return 1;
    }
     else if(you == 'w' && comp == 's')
    {
        return -1;
    }
    
     if(you == 's' && comp == 'g')
    {
        return -1;
    }
    else if(you == 'g' && comp == 's')
    {
        return 1;
    }
   
     if(you == 'w' && comp == 'g')
    {
        return 1;
    }
    
   
    else if(you == 'g' && comp == 'w')
    {
        return -1;
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
        comp = 's';
    }
     else if(number>=33 && number < 66)
     {
        comp = 'w';
     }
     else if(number >= 66)
     {
        comp = 'g';
     }
     printf("WELCOME TO THE WORLD OF  SNAKE WATER GUN .... \n");
     printf("BOOOOOOOM !!! ...LETS GAME BEGIN \n");
    printf("Enter s for snake , w for water and g for gun to play the game :\n");
    scanf("%c" , &you);
    int result = SnakeWaterGun(you , comp);
    printf("You choose %c and computer choose %c\n" , you , comp);
    if(result == 0)
    {
        printf("DRAW !!! TOUGH COMPETITION ...TRY ONE MORE ATTEMPT FOR CLEAR WINNER \n");
    }
    else if(result == 1)
    {
        printf(" YOU WIN !!! ...ITS PARTY TIME ...\n");
    }
    else if(result == -1)
    {
        printf(" YOU LOSE !!!....SAD LUCK ...BETTER LUCK NEXT TIME ..\n");
    }
    return 0;
}
