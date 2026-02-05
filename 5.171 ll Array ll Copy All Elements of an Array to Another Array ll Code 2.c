#include<stdio.h>
int main()
{
    int Array_1[5] = {10,20,30,40,50},i,Array_2[5];

    // Printing Array 1 :
    printf("Array1: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",Array_1[i]);
    }
    printf("\n");
    //Copying all elements from Array1 to Array2 :
    for(i=0; i<5; i++)
    {
        Array_2[i] = Array_1[i] ;
    }

    // printing Array 2 :
    printf("Array_2 is : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",Array_2[i]);
    }
    return 0 ;
}
