#include <stdio.h>

int main(int argc, char *argv[]){

    int score = 50;

    if(score >= 80){
        printf("A\n");
    }
    else if(score >= 70){
        printf("B\n")
    }
    else if(score >= 60){
        printf("C\n")
    }
    else if(score >= 50){
        printf("D\n")
    }
    else{
        printf("E\n");
    }

    return 0;
}