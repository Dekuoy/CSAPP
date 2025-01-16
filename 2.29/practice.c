#include <stdio.h>

#include <stdint.h>

#include <limits.h>

int tadd_ok(int8_t x, int8_t y)
{
    int8_t z = x + y;

    if ((x > 0 && y > 0 && z < 0) || (x < 0 && y < 0 && z > 0))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int tsub_ok(int8_t x, int8_t y)
{
    if (y == INT8_MIN)
    {
        if (x < 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return tadd_ok(x, -y);
    }
}

int tadd_ok2(int8_t x, int8_t y)
{
    int8_t sum = x + y;
    return (sum - x == y) && (sum - y == x);
}

int main()
{
    int8_t x = 127;
    int8_t y = 1;

    int i = tadd_ok(x, y);

    printf("%d\n", i);

    int a = 126;
    int b = 22;
    int8_t i2 = tadd_ok2(a, b);

    printf("%d\n", i2);

    return 0;
}