#include <stdio.h>

int main(int argc, char *argv[]){

    int width = 7;
    int height = 5;
    int perimeter = 0;
    int area = 0;


    perimeter = (width+height)*2;
    area = width*height;

    printf("Perimeter of the rectangle = %d cm\n", perimeter);
    printf("Area of the rectangle = %d cm\n", area);

    return 0;
}