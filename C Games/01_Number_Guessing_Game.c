//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                              //
//   Wap that generates a random number and ask the player to guess it.                                                                         //
//   If the player guess is higher than the actual number, the program prints "Lower number please".                                            //
//   Similarly if the player guess is too low, the program prints "Higher number please".                                                       //
//   When the player guesses the correct number, the program displays the number of guesses the player used to arrive at the number.            //
//                                                                                                                                              //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand()%100 + 1;      //Generates a random number between 1 to 100.

    //printf("The number is %d\n\n",number);

    //keep running the loop until the number is generated.
    do
    {
        printf("Guess the number between 1 to 100:\n");
        scanf("%d",&guess);

        if(guess > number)
        {
            printf("Lower number please\n\n");
        }
        else if(guess < number)
        {
            printf("Higher number please\n\n");
        }
        else
        {
            printf("You guessed the correct number in %d attempts\n",nguess);
        }

        nguess++;
    }
    while(guess!=number);

    getch();
    return 0;
}
