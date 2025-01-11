#include <stdint.h>
#include <stdio.h>

int32_t x = 0x87654321;

int main()
{   
    printf("A\n");
    int32_t zuidiyouxiaozijie = x & 0xff;
    
    printf("%.8x",zuidiyouxiaozijie);
    printf("\n");

    printf("-------------------\n");


    printf("B\n");
    
    int32_t chulezuidiyouxiaoweiqufan = ~x;
    int32_t chulezuidiyouxiaowei = chulezuidiyouxiaoweiqufan & 0xffffff00;

    int32_t chulezuidiyouxiaoweiqufandeshu = chulezuidiyouxiaowei | zuidiyouxiaozijie;

    printf("%.8x",chulezuidiyouxiaoweiqufandeshu);


    printf("-------------------\n");

    int32_t chulezuidiyouxiaoweiqufanqufan = x | 0xff;
    
    printf("%.8x\n",chulezuidiyouxiaoweiqufanqufan);




    return 0;

}




