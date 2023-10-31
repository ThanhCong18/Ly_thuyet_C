#include<stdio.h>

int main()
{
    int x = 20 ; 

    printf("dia chi cua bien x :%d\n",&x);
    printf("gia tri cua bien x :%d\n",x);

    /* 
    pt : vung địa chỉ con trỏ trỏ đến . 
    *pt : giá trị tại vùng địa chỉ con trỏ trỏ tới .  
     */
    int *pt = &x ; 
    *pt = 100 ;
    printf("dia chi cua bien x :%d\n",pt);
    printf("gia tri cua bien x :%d\n",*pt);

    return 0 ;
}