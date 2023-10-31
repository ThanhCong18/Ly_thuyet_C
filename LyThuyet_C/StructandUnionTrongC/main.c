#include<stdio.h>
#include<string.h>

typedef struct 
{
    char ten[10];
    int tuoi ;
    char sdt[10];
    int lop ; 
}    sv_info_t ;

int main()
{
    sv_info_t SV1 ; // SV! là 1 biến . SV1 không cần quan tâm vì struct truy cập để lấy dữ liệu .
  //  char a[30] , b[20] ;
  //  int tuoi , lop ; 
    printf("Nhap ten :");
    gets(SV1.ten);

    printf("nhap tuoi:");
    scanf("%d" , &SV1.tuoi) ;

    fflush(stdin) ; 
    printf("nhap sdt:");
    gets(SV1.sdt);

    printf("nhap lop:");
    scanf("%d" , &SV1.lop);
    printf("---------------------------\n");
    printf("ten : %s\n", SV1.ten);
    printf("tuoi : %d\n", SV1.tuoi);
    printf("sdt : %s\n", SV1.sdt);
    printf("lop : %d\n", SV1.lop);

    return 0 ;
}

