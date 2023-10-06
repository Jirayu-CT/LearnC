#include <stdio.h>

int main(int argc, char *argv[])
{

    printf("***********\n");
    printf("1*   7   *\n");
    printf(" 2*  5  *\n");
    printf("  3* 3 *\n");
    printf("   4*1*\n");
    printf("  3* 3 *\n");
    printf(" 2*  5  *\n");
    printf("1*   7   *\n");
    printf("***********\n");
    printf("\n");

    int i = 0;
    
    int rount = 6;
    for (i = 0; i < 4; i++){
        if(i == 0){
            for (int j = 0; j < 11; j++){
                printf("*");
            }
            printf("\n");
        }
        for (int x = 0; x <= i; x++){
            printf(" ");
        }
        printf("*");
        int x = 0;
        
        for(x = 0; x <= rount; x++){
            printf(" ");
        }
        rount -= 2;
        printf("*");
        printf("\n");
    }

    rount = 3;
    for (i = 3; i > 0; i--){
        for (int x = 0; x <= i-1; x++){
            printf(" ");
        }
        printf("*");
        int x = 0;
        
        for(x = 1; x <= rount; x++){
            printf(" ");
        }
        rount += 2;
        printf("*");
        printf("\n");

        if(i == 1){
            for (int j = 0; j < 11; j++){
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}