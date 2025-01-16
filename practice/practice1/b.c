#include <stdio.h>

void equal(int, int);

void equal(int x, int y)
{
    if (!(x ^ y))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}

int main()
{
    equal(10, 20);

    equal(20, 20);

    return 0;
}