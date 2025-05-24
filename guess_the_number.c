#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random,guess ; // Declaring the random and guess variable
    int no_of_guess = 0; // declaring and setting the value of guess by user to 0.

    srand(time(NULL)); // Seed the random number generator with the current time to ensure different results each run

    printf("Welcome to Guess The Number.\n");
    random = rand()%100 +1; // Generating a random integer between 1 to 100, +1 because it generates 0-99 then we do +1
 
    do{ // Using do-while to ensure the loop runs at least once

        printf("Please enter your guess between(1-100): \n");
        scanf("%d",&guess); // inputting the guess from user
        no_of_guess++; // increasing the number of guesses with each iteration

        if (guess < random){
            printf("Guess a larger number.\n");
        }
        else if (guess > random)
        {
            printf("Guess a smaller number.\n");
        }
        else{
            printf("Congratulations!! You have successfully guessed the correct number. It took you %d attempts.\n", no_of_guess);

        }
        // checking all the conditions in if else 

    }while (guess != random);
    printf("Thanks for playing.\n");
    printf("Developed by: Garv Mittal\n");

}