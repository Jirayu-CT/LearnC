#include <stdio.h>

int Plus_num(int y, int x){
    int c = 0;
    c = x - y;
    return c;
}

int main()
{
    int x = 5, y = 10;

    printf("%d", Plus_num(x, y));

    return 0;
}