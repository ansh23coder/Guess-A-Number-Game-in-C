#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, guess, nguesses = 1;  // changed number and guess to int
    srand(time(0));
    number = rand() % 100 + 1; // generates a random number between 1 to 100

    // Uncomment this for debugging purposes to check the generated number
    // printf("The number is %d \n", number);

    // Keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);  // using %d to read integer

        if(guess > number){
            printf("Lower number please!\n");
        }
        else if(guess < number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts.\n", nguesses);
        }
        nguesses++;  // increment after the guess
    } 
    while (guess != number);  // continue until the correct number is guessed

    return 0;
}

/* #GAME MAKING COMPLETED */
/*
Guess the number between 1 to 100
50
Lower number please!
Guess the number between 1 to 100
40
Lower number please!
Guess the number between 1 to 100
20
Lower number please!
Guess the number between 1 to 100
10
Lower number please!
Guess the number between 1 to 100
5
Lower number please!
Guess the number between 1 to 100
3
Higher number please!
Guess the number between 1 to 100
4
You guessed it in 7 attempts.
*/