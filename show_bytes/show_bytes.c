#include <stdio.h>
#include <string.h>

// 定义byte_pointers的类型为无符号指向char的指针类型
typedef unsigned char *byte_pointers;

void show_bytes(byte_pointers start, size_t len)
{
    int i = 0;
    for (i; i < len; i++)
    {
        // 遍历start
        printf("%.2x", start[i]);
    }

    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointers)&x, sizeof(int));
}

void show_double(double x)
{
    show_bytes((byte_pointers)&x, sizeof(double));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointers)x, sizeof(void *));
}


int main()
{
    int p = 10;
    show_int(10);
    show_double(10.11);
    show_pointer(&p);

    printf("==================\n");
    

    int val = 0x87654321;
    byte_pointers valp = (byte_pointers)&val;

    show_bytes(valp , 1);
    show_bytes(valp , 2);
    show_bytes(valp , 3);

    printf("==================\n");

    const char *s = "abcdef";
    show_bytes((byte_pointers)s , strlen(s));


    return 0;
}