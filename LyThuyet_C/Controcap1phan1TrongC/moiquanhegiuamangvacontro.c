#include<stdio.h>

int main()
{
    int mang [10] = {1,2,3,4,5,6,7,8,9,10} ;

    int *pt ; 
    pt = mang ; 
    *(pt+1) = 20 ;
    for ( int i = 0 ; i < 10 ; i++)
    {  
        *pt = *pt + 10 ;
        printf("Mang[%d] = %d\n",i,*pt);
        pt++; // tro toi vi tri tiep theo 
    }  
    return 0 ; 
}