#include<stdio.h>
int  main()
{
    int A[13],n,i ;
    printf("Enter many fibonacci numbers do you want to see: ");
    scanf("%d",&n);

    A[0] = 0 ;
    A[1] = 1 ;

    for(i=2;i<n;i++)
    {
        A[i] = A[i-1] + A[i-2] ;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }

 return 0 ;
}

// Enter many fibonacci numbers do you want to see: 8
  // :    0 1 1 2 3 5 8 13
