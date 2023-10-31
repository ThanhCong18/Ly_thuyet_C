#include<stdio.h>


// viết chương trình chọn từ bàn phím các phép toán .
// viết 1 chương trình hỗ trợ +-% .
// in ra kết quả và quay về menu phép toán . 


typedef int(*func_t)(int , int) ;

void cong ( int x , int y )
{
    printf("tong 2 so : x+y = %d\n" , x+y);
}

void tru ( int x , int y )
{
    printf("hieu 2 so : x +y = %d" , x-y);
}

void pheptoan(func_t func , int x , int y)
{
    func(x,y);
}


int main()
{
    func_t func ;
    pheptoan(cong,2,3);
    return 0 ; 
}
