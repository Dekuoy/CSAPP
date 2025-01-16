#include <stdio.h>
#include <stdint.h>

int panduanshifouyichu(uint8_t x, uint8_t y)
{

    uint8_t c = x + y;
    if (c < x || c < y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    uint8_t x = 254;
    uint8_t y = 11;

    int i = panduanshifouyichu(x,y);

    printf("%d\n" , i);
    return 0;
}