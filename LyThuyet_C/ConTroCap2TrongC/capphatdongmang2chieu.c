#include<stdio.h>
#include<stdlib.h>
void NhapMang(int **arr , int row , int low)
{
    printf("nhap mang 2 chieu : \n");
    for( int i = 0 ; i < row ; i++)
    {
        for ( int j = 0 ; j < low ; j++)
        {
            printf("arr[%d][%d] = ", i , j );
            scanf("%d" ,&arr[i][j] );
        }
    }
}



void InMang(int **arr , int row , int low)
{
    printf("In mang 2 chieu : \n");
    for( int i = 0 ; i < row ; i++)
    {
        for ( int j = 0 ; j < low ; j++)
        {
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }
}


int main ()
{
    int row , low ; 
    printf("Nhap hang nhap cot :");
    scanf("%d %d" , &row , &low) ;

    // cap phat 3 con tro .or cap phat tung hang
    int **ptt = (int**)calloc(row , sizeof(int));
    for (int i = 0 ; i < row ; i++)
    {
        // cap phat tung cot con tro 
        ptt[i] = calloc(low , sizeof(int));
    }
    NhapMang(ptt , row , low) ;
    InMang(ptt , row , low );
    for (int i = 0 ; i < row ; i++)
    {
        // cap phat tung cot con tro 
        free(ptt[i]); 
    }
    free(ptt);
    // bat buoc phai free .
    return 0 ;
}
