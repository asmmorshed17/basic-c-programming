// Write  a Program that reads 10 numbers and display their Sum and Average
#include<stdio.h>
int main()
{
    int A[100],Sum=0,n,i;
    printf("How many numbers do you want to see: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++)
    {
        Sum = Sum + A[i];
    }

    printf("The Summation of this Arrays = %d\n",Sum);
    printf("The Average of this Arrays   = %.2f\n",(float)Sum/n);
    return 0 ;
}
/*  How many numbers do you want to see: 10
A[0] = 0
A[1] = 1
A[2] = 2
A[3] = 3
A[4] = 4
A[5] = 5
A[6] = 6
A[7] = 7
A[8] = 8
A[9] = 9
The Summation of this Arrays = 45
The Average of this Arrays   = 4.50    */
