#include<stdio.h>

int main()
{
    char pheptoan ; 
    int x ,y , ketqua ;
    printf("Nhap phep toan :");
    scanf("%c" , &pheptoan);
    printf("Nhap 2 so x va y :");
    scanf("%d %d" , &x , &y);
    switch (pheptoan)
    {
        case '+':
        ketqua = x + y ; 
        break;
        case '-':
        ketqua = x - y ; 
        break;
        case '*':
        ketqua = x*y ; 
        break;
        case '/':
        ketqua = x/y ; 
        break;
        default :
        printf("phep tinh chua hop le !\n");
    }
    printf("ket qua phep tinh : %d" , ketqua);
    return 0 ; 
}
