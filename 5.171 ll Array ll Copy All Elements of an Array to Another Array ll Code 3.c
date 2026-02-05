#include<stdio.h>
int main()
{
    int array1[15],array2[15],i,n ;
    printf("How many numbers: ");
    scanf("%d",&n);

    // scanning array1:
    for(i=0;i<n;i++)
    {
        printf("Array_1[%d] : ",i);
        scanf("%d",&array1[i]);
    }

    // printing array 1 :
    printf("\nArray 1 :");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }

    // copying all value from array 1 to array 2 :
    for(i=0;i<n;i++)
    {
        array2[i] = array1[i];
    }

    // Printing array 2:
    printf("\nArray 2 :");
    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }
}

/* How many numbers: 7
Array_1[0] : 1
Array_1[1] : 4
Array_1[2] : 2
Array_1[3] : 7
Array_1[4] : 5
Array_1[5] : 3
Array_1[6] : 9

Array 1 : 1 4 2 7 5 3 9
Array 2 :1 4 2 7 5 3 9 */
