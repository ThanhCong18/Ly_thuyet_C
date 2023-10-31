#include<stdio.h>

char hovaten[30];
int tuoi ;

void nhapthongtincanhan()
{
    printf("nhap ten :");
    gets(hovaten);
    printf("nhap tuoi :");
    scanf("%d", &tuoi);
    printf("\n");
}

void inthongtincanhan()
{
    printf("********\n");
    printf("Ten : %s\n", hovaten);
    printf("Tuoi: %d" , tuoi  );
}

int main()
{
    nhapthongtincanhan();
    inthongtincanhan();
    return 0 ; 
}