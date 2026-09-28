#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){	
 char userName[20];
 char guessCounter[3];
 int userGuess[3];

 printf("What is your name? \n");
 scanf("%s", userName);
 printf("Hello, %s! \n", userName);
 
 srand(time(NULL));
 int randInt = rand();
 randInt = (randInt % 100) + 1;
 
 guessCounter = 0; 
 userGuess = 0 ;

 if (strcmp(userGuess, randInt) ==  0){
 printf("hi");
}
 
 

 return(0);
}
