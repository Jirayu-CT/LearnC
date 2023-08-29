#include<stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    //char score[] = argv[1];

    //พิมพ์คำสั่ง ให้ป้อน ./ex8 75 -->pass
    //argc คือ จำนวนอาเรย์
    if(argc ==1){
        printf("Please enter score too\n");

    }
    else{
        //เช็คคะแนน ผ่าน หรือ ตก
        //argv[1] คือ อาเรย์ที่1
        printf("Your score = %s\n", argv[1]);
        //atoi()แปลงaray to int and #include <stdlib.h>
        if(atoi(argv[1]) >= 50){
            printf("You pass!!\n");
        }
        else{
            printf("You fail\n");
        }
    }
    int i = 0;
    for(i=0; i < argc; i++){
        printf("argc %d : %s\n", i, argv[i]);
    }

    return 0;
}