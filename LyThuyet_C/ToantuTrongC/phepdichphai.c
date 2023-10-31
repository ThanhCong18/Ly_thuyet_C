#include<stdio.h>
/* 
    cách xác định số âm và số dương dựa vào kiểu dữ liệu (int , char , short) và bit dấu .
    nếu bit dấu là 1 thì là số âm 
    nếu bit dấu là 0 thì là số dương . 

    trọng số của bit :
         76543210
    vd 0b11110000
 */
int main()
{
    unsigned char x = 0b11110000; // số dương . 
    char y = 0b11110000;          // số âm vì xét theo kiểu dữ liệu và bit dấu là 1 .
    printf("%d\n" , x);
    printf("%d" , y);
    return 0  ; 
}
