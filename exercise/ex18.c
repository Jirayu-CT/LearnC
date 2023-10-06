#include <stdio.h>

int main(int argc, char *argv[]){
    int num = 0;
    int day = 0;
    int year = 0;
    int month = 0;
    
    printf("Input no. of days: ");
    scanf("%d", &num);

    year = num/365;
    num = num - (365*year);
    month = num/30;
    day = num - (month*30);

    printf("%d Year(s)\n", year);
    printf("%d Month(s)\n", month);
    printf("%d Day(s)\n", day);

    return 0;
}