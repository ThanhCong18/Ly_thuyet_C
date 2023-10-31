#include<stdio.h>
// bieu thuc 1 ? bieu thuc 2 : bieu thuc 3 ; 
int main()
{
    int giave ; 
    int tuoi_nguoi_xem ; 
    printf("Nhap tuoi cua ban :");
    scanf("%d" , &tuoi_nguoi_xem );
    giave  = (tuoi_nguoi_xem > 18) ? 90000 : 50000 ;
    printf("Gia ve la : %d" , giave);
    return 0 ; 
}

