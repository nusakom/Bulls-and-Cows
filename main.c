#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    //1. set the limit 1 - 100,and the number of tries to be 7
    int limit = 100;
    int number_of_tries = 7;
    
    //2.set a reward number
    srand(time(NULL));//use current time as seed random generator
    int reward = rand() % limit + 1;
    
    //printf("reward:%d\n",reward);
    printf("Please enter your guess:");
    
    //int is_win = 0;
    //5.repeat 3 and 4 until ??
    while (number_of_tries >0)
    {
        printf("[%d] Please enter your guess:",number_of_tries);
        //3.take an input from the keyboard
        int guess;
        scanf("%d",&guess);
        printf("Your guess:%d.\n",guess);
        
        //4.compare
        if(guess == reward){
            printf("Guess == reward! You win!\n");
            break;
            //is_win = 1;
        }
        else if (guess > reward){
            printf("Guess > reward!\n");
        }else{
            printf("Guess < reward!\n");
        }
        number_of_tries --;
    }
    //if(is_win!=1)
    if(number_of_tries == 0)
        printf("YOU LOSE!!\n");
    return 0;
}

