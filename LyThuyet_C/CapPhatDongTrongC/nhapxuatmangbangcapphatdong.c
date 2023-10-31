#include<stdio.h>
#include <stdlib.h>
#include<string.h>


void Nhapmang( int *mang , int *sophantu)
{
    for ( int i = 0 ; i < *sophantu ; i++)
    {
         printf("mang[%d] = " , i);
         scanf("%d" , mang);
         mang++;
    }
}

void Inmang( int *mang , int sophantu)
{
    printf("-------------------\n");
    for(int i = 0 ; i < sophantu ; i++)
    {
        printf("mang[%d] = %d\n" , i , *(mang+i));
    }
}


int * XoaPhanTu( int *mang , int *sophantu )
{
    int delete ;
    printf("nhap vi tri can xoa : ");
    scanf("%d" , &delete);
    if( delete >= 0 && delete < *sophantu ){
    for (int i = delete ; i < *sophantu ; i++)
    {
        *(mang+i) = *(mang+i+1);
    }
    int * arr_3 = (int*)calloc(--(*sophantu) , sizeof(int));
    memcpy(arr_3 , mang , (*sophantu)*sizeof(int)) ; 
    free(mang);
    return arr_3 ; 
    }
    else {
        printf("khong ton tai gia tri cua phan tu nay !\n");
    }
}

int * ThemPhanTu( int *mang , int *sophantu )
{
    int themphantu ;
    printf("Nhap so phan tu can them :");
    scanf("%d", &themphantu );
    int *arr_2 = (int*)calloc((*sophantu) + 1 , sizeof(int));
    memcpy( arr_2 , mang , (*sophantu)*sizeof(int));
    arr_2[*sophantu] = themphantu ;
    free(mang);
    (*sophantu)++;
    return arr_2;
}



int * themphantu ( int *mang , int *sophantu )
{
    int phantuthem ; 
    printf("nhap phan tu them :");
    scanf("%d" , &phantuthem);
    int * arr_2 = (int*)calloc((*sophantu +1 ) , sizeof(int));
    memcpy(arr_2 , mang , (*sophantu)*sizeof(int));
    arr_2[*sophantu] = phantuthem ; 
    free(mang);
    (*sophantu)++; 
    return arr_2 ; 
}




int main()
{
    int n ; 
    printf("Nhap so phan tu n = ");
    scanf("%d" , &n) ;
    int *arr_1 = (int*)calloc( n , sizeof(int));
    Nhapmang(arr_1 , &n) ;
    //Inmang(arr_1 , n);
    arr_1 = themphantu(arr_1 , &n);
    Inmang(arr_1 ,n);
    while(1){
    arr_1 = XoaPhanTu(arr_1 , &n);
    Inmang(arr_1 , n) ;
    }
    return 0 ;  
}



