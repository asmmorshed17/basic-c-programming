// Sort a set of Number:
#include<stdio.h>
int main()
{
    int i,j ;
    int A[5] ;
    for(i=0;i<4;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            if(A[i]> A[j])
            {  int temp = A[i] ;
                A[i] = A[j];
                A[j] = temp ;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }
}
