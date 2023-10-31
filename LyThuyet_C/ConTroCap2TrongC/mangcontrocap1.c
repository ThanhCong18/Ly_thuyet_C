#include<stdio.h>
#include<string.h>

int mang0[] = {1,2,3,4,5};
int mang1[] = {11,12,13,14,15};
int mang2[] = {21,22,23,24,25};



void inmang ( int *mang , int num )
{
    printf("--------------\n") ;
    for ( int i = 0 ; i < num ; i++)
    {
         printf("mang[%d] = %d\n" , i , *(mang+i));
    }
}



void Nhapmang( int * mang , int num )
{
    printf("nhap mang : \n");
    for (int i = 0 ; i < num ; i++)
    {
        printf("mang[%d] = " , i);
        scanf("%d" , mang );
        mang++ ;
    }
}


void Sapxep( int * mang , int num )
{
    for ( int i = 0 ; i < num ; i++)
    {
        int temp ; 
        for ( int j = i + 1 ; j < num ; j++)
        {
            if ( mang[i] < mang[j])
            {
                temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp ; 
            }
        }
    }
}

int main ()
{
    int *pt[3] ; 
    pt[0] = mang0 ;
    pt[1] = mang1 ; 
    pt[2] = mang2 ;
    Nhapmang(pt[0] , 5);
    Sapxep(pt[0] , 5) ; 
    inmang(pt[0] , 5) ;
    return 0 ; 
}


