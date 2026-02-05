// Array : Sum and Average of an Array
#include<stdio.h>
int main()
{
    int  a[5],sum = 0, i ;
    a[0] = 2 ;
    a[1] = 2 ;
    a[2] = 3 ;
    a[3] = 4 ;
    a[4] = 5 ;

    for(i=0 ;i<5;i++)
    {
        sum = sum + a[i];

    }
    printf("The Sum is : %d\n",sum);
    printf("The Average is : %.2f\n",(float)sum/5);
    return 0 ;
}
// The Sum is : 16
// The Average is : 3.20
