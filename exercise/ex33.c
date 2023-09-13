#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;
    int round = 5;
    int max_number = 0;
    int position = 0;
    int number[round];

    printf("Input 5 integers\n");
    for(i = 0; i < round; i++){
        scanf("%d", &number[i]);
    }

    for(i = 0; i < round; i++){
        if(number[i] > max_number){
            max_number = number[i];
            position = i+1;
        }
    }
    printf("Highest value: %d\n", max_number);
    printf("Position: %d\n", position);

    return 0;
}