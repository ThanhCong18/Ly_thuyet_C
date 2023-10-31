#include<stdio.h>

void nhapmang2chieu( unsigned char mang[][4] , int *row , int *col)
{  
    printf("Nhap so hang :");
    scanf("%d" , row);
    printf("nhap so cot : ");
    scanf("%d" , col) ;
    for ( int i = 0 ; i < * row  ; i++)
    {
        for (int j = 0 ; j < * col ; j++)
        {
            printf("Mang[%d][%d] = " , i , j) ; 
            scanf("%d" , &mang[i][j]);
        }
    }
}

void inmang2chieu( unsigned char mang[][4] , int row , int col) 
{
    printf("in ra mang :\n");
    for ( int i = 0 ; i < row ; i++)
    {
        for ( int j = 0 ; j < col; j++)
        {
              printf("%d " , mang[i][j]);
        }
        printf("\n");
    }
}

int main()
{   
    int row , col ; 
    unsigned char mang[3][4] ;
    nhapmang2chieu(mang,&row,&col) ;
    inmang2chieu(mang,row,col);
    return 0 ; 
}