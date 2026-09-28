#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

int main(){	
 char userName[20];
 char guessCounter[3];
 int target;
 int userGuess;
 int counter;
 bool keepGoing = true;

 printf("What is your name? \n");
 scanf("%s", userName);
 printf("Hello, %s! Guess a number between 1 and 100! \n", userName);
 
 srand(time(NULL));
 int randInt = rand();
 target = (randInt % 100) + 1;
 
 while (keepGoing) {
 counter += 1; 
 printf("Turn %d: What is your guess? \n", counter);
 scanf("%d", &userGuess);
 if (userGuess > target){
  printf("Too high! \n");
  }  
 else if (userGuess < target) {
  printf("Too low! \n");
  }
 else {
  printf("Your guess is correct! \n");
  keepGoing = false; 
  }
 }
 
 printf("It took you %d turns! \n", counter);
 if (counter > 7) {
  printf("Your preformance was very bad! :( \n");
 }
 else if (counter < 7) { 
  printf("Your preformance was very good! :) \n");
 }
 else {
  printf("Your preformance was average. :/ \n");
 } 
  
 return(0);
}// end main
