#include <stdio.h>
#include <ctype.h>

void printf_arguments(int argc, char *argv[]);
void print_letters(char word[]);
int can_print(char ch);

void printf_arguments(int argc, char *argv[]){
    //loop print letters
    int i = 1;
    for (i = 1; i < argc; i++)
    {
        print_letters(argv[i]);
    }
    
}

void print_letters(char word[]){

    int i = 0;
    //loop check each char
    //chexk van print?
    for(i = 0; word[i] != '\0'; i++){

        char ch = word[i];
        if(can_print(ch)){
            printf("'%c' == %d    ", ch, ch);
        }
    }
    printf("\n");
}

int can_print(char ch){

    if(isspace((int)ch)){
        return 0;
    }
    else if(isalpha((int)ch)){
        return 1;
    }
}

int main(int argc, char *argv[]){

    printf_arguments(argc, argv);
    return 0;
}