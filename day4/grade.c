#include <stdio.h>

int main(int argc, char *argv[]){

    int total = 0;
    int counter = 1;
    float average = 0.0;


    while (counter <= 10)
    {
        int score =0;

        printf("Enter a score: ");
        scanf("%d", &score);

        if (score == -1)
        {
            break;
        }

        total = total + score;

        average = (float)total / counter;

        counter++;
    }
    printf("Total = %d\n", total);
    printf("Average sscore = %.2f\n", average);
    

    return 0;
}