#include<stdio.h>

int main()
{
    // unsigned char x = 0b11101110 ;
    // x = x |(1<<4);
    // printf("%d" , x);
    // return 0 ; 
    // togel bit - bật trạng thái đảo . 
    unsigned char x = 0b11101110 ;
    x = x ^ (1<<4);
}
