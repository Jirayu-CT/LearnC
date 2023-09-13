#include <stdio.h>

int Check_Password(int user_Input_Password);
int _password = 1234;


int Check_Password(int user_Input_Password){
    while(1){
        if(_password == user_Input_Password){
            printf("Correct password\n");
            break;
        }
        else{
            printf("Incorrect password\n");
            printf("Enter Your Password: ");
            scanf("%d", &user_Input_Password);
        }
    }
}

int main(int argc, char *argv[]){
    int user_Input_Password = 0;

    printf("Enter Your Password: ");
    scanf("%d", &user_Input_Password);

    Check_Password(user_Input_Password);
    
    return 0;
}