#include<stdio.h>

//char hovaten[30];

char hovaten[30] ;

void nhapthongtin(void)
{
    //char hovaten[30];
    printf("Nhap Ten :");
    gets(hovaten);
}


void inthongtin(void)
{
    printf("Ten : %s\n" , hovaten);
}



int nhaptuoi(void)
{
    int tuoi ;
    printf("nhap tuoi :");
    scanf("%d",&tuoi);
    return tuoi;
}


int main ()
{
    int tuoithucte ; 
    nhapthongtin();
    //inthongtin();
    tuoithucte = nhaptuoi();
    inthongtin();
    printf("Tuoi : %d",tuoithucte);
    return 0 ;
}
 