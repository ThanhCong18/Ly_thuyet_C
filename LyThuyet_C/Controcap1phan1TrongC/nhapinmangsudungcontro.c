#include<stdio.h>

void Nhapmang( int *mang , int * sophantu)
{
    printf("Nhap so phan tu : ");
    scanf("%d" , sophantu);
    for( int i = 0 ; i < *sophantu ; i++)
    {
        printf("Mang[%d] = ", i);
        scanf("%d" , mang);
        mang++;
    }
}

int tinhtong( int *mang , int sophantu)
{
    int tong = 0 ; 
    for(int i = 0 ; i < sophantu ; i++)
    {
        tong = tong + *mang ; 
        mang++;
    }
    return tong ; 
}

void Inmang( int *mang , int sophantu)
{
    printf("In ra mang :\n");
    for (int i = 0; i < sophantu; i++)
    {
        printf("Mang[%d]= %d\n", i , *mang);
        mang++;
    }
}
int main()
{
    int mang[100];
    int sophantu , ketqua ; 
    Nhapmang(mang,&sophantu);
   // Inmang(mang,sophantu);
    ketqua = tinhtong(mang,sophantu);
    printf("tong cac phan tu trong mang :%d", ketqua);
    return 0 ; 
}