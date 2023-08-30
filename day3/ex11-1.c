#include <stdio.h>

int main(int argc, char *argv[]){
    //int array
    int areas[] = {10, 12, 13, 14, 20};

    printf("Now, 1st member: %d\n", areas[0]);

    int i=0;
    for(i=0; i<5; i++){
        printf("%d\n", areas[i]);
    }

    areas[0] = 100;
    printf("Now, 1st member: %d\n", areas[0]);

    i=0;
    for(i=0; i<5; i++){
        printf("%d\n", areas[i]);
    }

    //char array
    char fname[] = "Jirayu";

    printf("1st char: %d\n", fname[0]);

    fname[0] = 'o'; //assign ASCII of '111'
    printf("1st char: %d\n", fname[0]);

    fname[0] = 111; //assign ASCII of 'o'
    printf("1st char: %d\n", fname[0]);

    // overflow than 256(max ascii value), 300 - 256 =>44
    fname[0] = 300;
    printf("1st char: %d\n", fname[0]);

    return 0;
}