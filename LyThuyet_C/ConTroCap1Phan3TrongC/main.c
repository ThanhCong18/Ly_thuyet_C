#include<stdio.h>

int main()
{
    int x = 5 ; 
    int *contro = &x ; 
    int **ptr = &contro ;

    printf(" dia chi cua bien x :%d\n" , &x);
    printf("vung dia chi con tro  :%d\n" , contro ) ;
    printf("dia chi con tro cap 1 tren Ram :%d\n" , &contro);
    printf("vung dia chi ma con tro cap 2 tro toi : %d\n" , ptr );
    printf("gia tri cua con tro cap 2 :%d" , *ptr) ;
    
    return 0 ; 
}