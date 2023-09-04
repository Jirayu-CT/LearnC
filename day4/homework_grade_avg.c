#include <stdio.h>

void get_score();
int _stop(int score);
int within_range(int score);

void get_score(){
    int score = 0;
    int counter = 1;
    int total = 0;
    float average = 0.0;

    while (counter <= 10){
        printf("Enter a score%d: ", counter);
        scanf("%d", &score);
        if(within_range(score)){

            if(_stop(score)){
                break;
            }

            total = total + score;
            average = (float)total / counter;
            counter++;
        }
        else{
            printf("Your score is too high, enter again.\n");
        }
    }
    printf("Total = %d\n", total);
    printf("Average sscore = %.2f\n", average);
}


int within_range(int score){
    if(score <= 100){
        return 1;
    }
    else{
        return 0;
    }
    
}

int _stop(int score){
    if (score == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(int argc, char *argv[]){

    get_score();

    return 0;
}