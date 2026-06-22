#include <stdio.h>

void changeValue(int num)
{
    num = 100;

    printf("Inside Function = %d\n", num);
}

int main()
{
    int x = 10;

    printf("Before Function Call = %d\n", x);

    changeValue(x);

    printf("After Function Call = %d\n", x);

    return 0;
}