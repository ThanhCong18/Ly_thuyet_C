#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *pt = malloc(10*sizeof(int));
    pt[0] = 100;
    printf("%d" , pt[0]); 
    free(pt);
    return 0 ; 
}
