#include <stdio.h>

int main(int argc, char *argv[]){

    int areas[] = {10, 12, 13, 14, 20};

    printf("Size of n int: %ld\n", sizeof(int));
    printf("Size of areas[]: %ld\n", sizeof(areas));
    printf("Number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
    printf("The 1st value: %d, the 3rd value: %d\n", areas[0], areas[2]);

    printf("--------------\n");

    //char areas
    char fname[] = "Jirayu";
    printf("Size of a char: %d\n", sizeof(char));
    printf("Size of a fname char: %d\n", sizeof(fname));
    //Last member of char[] = '\0'
    printf("Number of char in fname: %ld\n", sizeof(fname) / sizeof(char));

    printf(":ast minber: %d\n", fname[6]);

    int i;
    for(i=0; i<7; i++){
        printf("%d\n", fname[i]); //print ASCII charcode
    }


    return 0;
}