#include <stdio.h>

int main(int argc, char *argv[]){

    int number = 0;
    int rows = 0;
    int max = 0;
    int i = 1;

    printf("Enter Rows Number: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++){
        printf("Enter Number%d: ", i);
        scanf("%d", &number);

        if(number > max){
            max = number;
        }
    }
    
    printf("max number: %d", max);


    return 0;
}