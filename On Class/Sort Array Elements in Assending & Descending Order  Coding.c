// Sort Array Elements in Ascending & Descending Order Coding
#include<stdio.h>
int main()
{
    // a[5] = 2 1 4 5 3 ------> 1 2 3 4 5
    int A[5],i,j,temp;
    printf("Enter array elements: ");
    for(i=0;i<5;i++)
    {
      scanf("%d",&A[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(A[i]>A[j])        // Ascending Order:  if(A[i] > A[j])
                                //  Descending Order: if(A[i] < A[j])
            {
                temp = A[i];
                A[i] = A[j] ;
                A[j] = temp ;
            }
        }
    }

    printf("Array Elements : ");
    for(i=0;i<5 ;i++)
    {
        printf("%d ",A[i]);
    }

}

// Enter array elements: 2 4 1 5 3
// Array Elements : 1 2 3 4 5
