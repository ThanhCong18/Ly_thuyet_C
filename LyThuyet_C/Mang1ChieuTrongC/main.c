#include<stdio.h>


void NhapMang(unsigned char Mang[] , int *sophantu )
{
    printf("Nhap so phan tu:\n");
    scanf("%d" , sophantu) ;
    for ( int i = 0 ; i < *sophantu ; i++)
    {
          printf("Mang[%d] = " , i);
          scanf("%d" , &Mang[i]);
    }

}
void InMang(unsigned char Mang[] , int sophantu)
{
    printf("Mang In ra :\n");
    for ( int i = 0 ; i < sophantu ; i++)
    {
        printf("Mang[%d] = %d\n", i, Mang[i]);
    }
}

int main()
{
    unsigned char Mang1chieu[100];
    int sophantu ;
    NhapMang(Mang1chieu,&sophantu);
    InMang(Mang1chieu,sophantu);
    return 0 ; 
}