#include<stdio.h>

/* 
    bitfield ít được sử dụng . 
 */
struct time {

    unsigned int hours : 5 ; // : 5 là 5 bit , giá trị là 2^5 . 
    unsigned int minutes : 6; 
    unsigned int seconds : 6 ; 
};

int main()
{
    struct time  t = {
        .hours = 10 ,
        .minutes = 30 ,  
        .seconds  = 10 
    };

    printf("the time is %d : %d : %d\n", t.hours , t.minutes , t.seconds );
    printf("the size of time is %ld byte.\n", sizeof(struct time)) ;
    return 0 ; 
}
