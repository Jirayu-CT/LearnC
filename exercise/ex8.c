#include <stdio.h>

int main(int argc, char *argv[]){

    int day = 0;
    int year = 0;
    int weeks = 0;

    printf("Number of days : ");
    scanf("%d", &day);

    while(day >= 365){
        day = day - 365;
        year += 1;
    }
    while(day >= 7){
        day = day - 7;
        weeks += 1;
    }
    printf("Expected Output :\n");
    printf("Years: %d\n", year);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", day);

    return 0;
}