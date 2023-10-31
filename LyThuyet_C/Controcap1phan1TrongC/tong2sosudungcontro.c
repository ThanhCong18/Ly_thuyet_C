#include<stdio.h>

int tong2so( int *x , int *y)
{
    printf("Nhap so x :");
    scanf("%d", x);
    printf("Nhap so y :");
    scanf("%d" , y);
    int sum = (*x) + (*y) ;
    return sum ; 
}

int main()
{
    int a , b , ketqua ; 
    ketqua=tong2so(&a,&b);
    printf("tong 2 so la :%d",ketqua);
    return 0 ; 
}