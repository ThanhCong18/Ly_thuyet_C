#include<stdio.h>

int main()
{
    int x = 10 ; 
    x-- ;  
    printf("%d\n" , x);
    // ++x tăng giá trị lên 1 đơn vị trước sau đó mới thực hiện lệnh .
    // ++x , x++ chỉ có ý nghĩa khi nằm trong khối lệnh ví dụ printf("%d" , x++);
    // còn khi ở ngoài thì x++,++x cx là chỉ là tăng thêm 1 đơn vị .
    return 0 ;
}

