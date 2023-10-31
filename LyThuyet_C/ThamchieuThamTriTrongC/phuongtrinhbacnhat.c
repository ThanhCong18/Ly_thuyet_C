#include<stdio.h>
// giai phuong trinh bac nhat . ax + b = 0 
// a = 0 
//     + b = 0 -> phương trinh  vô số nghiệm 
//     + b # 0 -> phuong trinh vô nghiệm 
// a # 0 
//     + x = -a/b ; 

void GiaiPTBac1 ( float *x , float *y)
{
    printf("nhap x:");
    scanf("%f",x);     // x la dia chi , *x la gia tri tai dia chi do . 
    printf("nhap y :");
    scanf("%f",y);
    float res ; 
    if (*x == 0)
    {
        if (*y == 0)
        {
            printf("phuong trinh vo so nghiem\n");
        }
        else
        {
            printf("phuong trinh vo nghiem\n");
        }
    }else
    {
            res = -(*y)/(*x) ;
            printf("phuong trinh co nghiem la :%.f" , res);
    }  
}
int main()
{
        float a , b ; 
        GiaiPTBac1(&a,&b);
        return 0 ;
}