#include<stdio.h>

typedef struct 
{
    char ten[30];
    int tuoi ; 
} sinhvien_info_t ; 

void NhapSV(sinhvien_info_t TABLE_SV[] , int *soSV)
{
    printf("nhap so sinh vien :");
    scanf("%d" , soSV);
    for ( int i = 0 ; i < *soSV ; i++)
    {
        printf("SV %d\n" , i+1);
        printf("Nhap ten :\n");
        fflush(stdin) ;
        gets(TABLE_SV[i].ten);
        printf("Nhap tuoi:\n");
        scanf("%d" , &TABLE_SV[i].tuoi);
        printf("-----------\n");
    }
}


void InsoSV(sinhvien_info_t TABLE_SV[] , int soSV)
{
    for ( int i = 0 ; i < soSV ; i++)
    {
        printf("SV %d\n" , i+1);
        printf("ten  : %s\n" , TABLE_SV[i].ten);
        printf("tuoi : %d\n" , TABLE_SV[i].tuoi);
    }
}

int main ()
{
    sinhvien_info_t TABLE_SV [100] ; 
    int soSV ;
    NhapSV(TABLE_SV,&soSV);
    InsoSV(TABLE_SV,soSV);
    return 0 ;
}

