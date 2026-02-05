//  Code 1 : Array : Maximum and Minimum of Array
// Write a Program that can take Some numbers and display maximum:
#include<stdio.h>
int main()
{
    int num[20],n,i ;
    printf("how many numbers do you want to work: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("num[%d] = ",i);
        scanf("%d",&num[i]);
    }
    int max = num[0] ;   // let num[0] ---> max
    for(i=1;i<n;i++)
    {
        if(max<num[i])
            max = num[i] ;
    }
    printf("Maximum Number: %d\n",max);
    return 0 ;
}

/* how many numbers do you want to work: 5
num[0] = 1
num[1] = 23
num[2] = 2
num[3] = 43
num[4] = 21
Maximum Number: 43    */
