#include <stdio.h>

int main()
{
    int a = 10;

    printf("Original Value = %d\n", a);

    printf("Pre Increment (++a) = %d\n", ++a);
    printf("Post Increment (a++) = %d\n", a++);
    printf("Value after Post Increment = %d\n", a);

    printf("Pre Decrement (--a) = %d\n", --a);
    printf("Post Decrement (a--) = %d\n", a--);
    printf("Value after Post Decrement = %d\n", a);

    return 0;
}