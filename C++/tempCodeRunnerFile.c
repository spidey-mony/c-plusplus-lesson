#include<stdio.h>


int main(){ int guess;
            int num;
    printf("Random Number",rand()%11);
  printf("This is Guess Number Game\n");
  printf("Enter any number to guess(1-10):");
  scanf("%d",guess);
  num = rand()%11;
    if(guess == num){
        printf("You Win!");
    }
  else {
      printf("You Lose!");
  }
   return 0;
}