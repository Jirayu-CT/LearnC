#include<stdio.h>

int main(int argc, char *argv[]){

    //./ex10 a

    if(argc == 1){
        printf("Please enter a vowels dar, like a,e,i,o,u\n");
    }
    else{
        // switch case weekday or weekend
        //มีตัวจบ string คือ \0
        switch (argv[1][0]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("A vowel\n");
                break;
            default:
                printf("A letter\n");
        }
    }

    return 0;
}