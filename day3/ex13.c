#include <stdio.h>

int main(int argc, char *argv[]){

    int i = 0;
    for(i=0; i<argc; i++){
        printf("srg %d: %s\n", i, argv[i]);
    }
    // char fruits[]  array of characters ทีล่ะตัว
    // char *fruits[]  array of string(pointer to char[])
    //                   ที่แต่ล่ะ element ชี้ไปที่ char element[0]
    char *fruits[] = {"apple", "banana", "coconut", "dutian", "eggplant"};

    int num_ftruits = 5;
    for(i=0; i<num_ftruits; i++){
        printf("Fruit no.%d id %s\n", i+1, fruits[i]);
    }
    
    return 0;
}