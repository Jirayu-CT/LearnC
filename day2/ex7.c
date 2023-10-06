#include <stdio.h>


int main(int argc, char *argv[]){

    char fname[] = "Jirayu"; 
    char lname[] = "Chomthong"; 
    char sid[] = "66112230038";

    int km_distance = 410;
    float mi_distance = 0;

    //long storage = 1L * 1024L * 1024L * 1024L;
    long long storage = 5LL * 1024LL * 1024LL * 1024LL;

    mi_distance = km_distance/1.609;

    //printf("...%d..%s..%s..\n", var1, var2, var3);
    printf("My first name is %s\n", fname);
    printf("My last name is %s\n", lname);
    printf("My student id is %s\n", sid);
    printf("I'm %s %s and ID: %s \n", fname, lname, sid);

    printf("I'm %d km far away from BKK.\n", km_distance);
    printf("Or it %f is miles\n", mi_distance);

    printf("My storage size is %lld GByte\n", storage);

    printf("0.25 is 25%%\n");
    
    

    //การบ้าน :ให้ไปลองใช้ unsigned int, float, bouble ดู

    return 0;
}