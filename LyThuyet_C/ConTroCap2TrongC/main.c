#include<stdio.h>
#include<stdlib.h>

// void capphatbonho ( int **pt)
// {
//     *pt = calloc(10 , sizeof(int));
// }
// int main()
// {
//     int *pt ;
//     capphatbonho(&pt);
//     pt[0] = 1 ; 
//     printf("%d" , pt[0]);
//     return 0 ; 
// }

void capphatdong(int **p , int *n )

{
    *p = calloc( (*n) , sizeof(int));
}

void main()

{
    int *ptr = NULL ; 
    int n = 2 ; 
    capphatdong(&ptr , &n) ; 
    printf("dia chi duoc cap phat  :%p\n" , ptr );
    ptr[0] = 100 ; 
    printf(" gia tri : %d" , ptr[0]);
}



