#include<stdio.h>
// tham tri tuc la truyen vao gia tri .
// tham chieu tuc la truyen vao dia chi .

void giam1donvi(int *var)
{
    *var = *var - 1 ; 
}


int main()
{
    int x = 100 ; 
    printf("Truoc x = %d\n", x);
    giam1donvi(&x);
    printf("Sau x = %d\n"  , x); 
    return 0 ; 
}