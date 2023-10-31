#include<stdio.h>
#include <stdlib.h>

void capphatmang ( int **pt)
{
    *pt = calloc(10,sizeof(int));
}

int main()
{

    int *contro ;
    capphatmang(&contro);
    *contro = 5 ;
    printf("%d" , *contro);
    return 0 ;
}
//  pt la dia chi con tro cap 2 cho toi 
// *pt là giá trị tại vùng địa chỉ mà con trỏ pt trỏ tới hay chính là giá trị của con trỏ cấp 1 .
// **pt là giá tri tại vung dia chỉ mà con trỏ cấp 1 trỏ tới . chính là giá trị của x .        