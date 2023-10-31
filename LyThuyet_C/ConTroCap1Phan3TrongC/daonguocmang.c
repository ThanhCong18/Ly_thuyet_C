#include<stdio.h>

void Nhapmang(int mang[], int *sophantu ) 
{
    printf("nhap so phan tu :");
    scanf("%d" , sophantu);
    for ( int i = 0 ; i < *sophantu ; i++)
    {
        printf("Mang[%d] = ", i);
        scanf("%d" , &mang[i]);
    }
}

void InMangDaoNguoc(int mang[], int sophantu)
{
    int *p = mang ;
    p = p + sophantu - 1 ;
    printf("In ra mang Dao Nguoc : ") ; 
    printf("%d " , *p);
    while (p != mang) // mang la dia chi mang hay &mang[0] ;
    {
        p--;
        printf("%d " , *p ) ;
    }
}


int main()
{
    int a [50] ;
    int sophantu ; 
    Nhapmang(a,&sophantu);
    InMangDaoNguoc(a,sophantu);
    return 0 ; 
}
