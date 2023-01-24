
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
 srand(time(0));
int hidden = rand()%100 +1;
//printf("%d \n",hidden);

int guessing_limit = 0;
while(guessing_limit<10){

    int guess;
    printf("Guess the correct Number: ");
    scanf("%d",&guess);

    if(guess==hidden){
        printf("You are right! \n\n");
    }
    else if(guess>hidden){
        printf("Guess Smaller Number \n\n");
    }
    else{
        printf("Guess Getter Number\n\n");
    }

    guessing_limit++;
}
   if(guessing_limit==10){
        printf("You failed. \n");
    }

return 0;
}
