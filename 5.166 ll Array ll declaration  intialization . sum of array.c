// An Array is a collection of variables of same types
#include<stdio.h>
int main()
{
    int  num[5] ;
    num[0] = 10 ;
    num[1] = 20 ;
    num[2] = 30 ;
    num[3] = 40 ;
    num[4] = 50 ;

    printf("Number1 = %d\n",num[0]);
    printf("Number5 = %d\n",num[4]);

    int Sum = num[0] +  num[1] + num[2] + num[3] + num[4] ;
    printf("The Summation of this Arrays : %d\n",Sum);
    return 0 ;

}
