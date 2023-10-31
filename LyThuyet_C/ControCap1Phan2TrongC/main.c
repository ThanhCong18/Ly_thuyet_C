#include<stdio.h>

int *timsolonnhat( int *x , int *y )
{
    if(*x>*y)
    {
        return x ; 
    }
    else
    {
        return y ; 
    }
}
    
int main()
{
    int a = 10 , b = 8 ; 
    int * ketqua ; 
    ketqua = timsolonnhat(&a,&b);
    printf("so lon nhat la :%d", *ketqua);
    return 0 ; 
}