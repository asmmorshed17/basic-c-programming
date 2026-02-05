// C program to merge two sorted array:

/*
 Write a C program to input elements in two array and merge two array to third array.
 How to merge two array in C programming.
 Logic to merge two sorted array to third array in C program.

Input:
Input first array elements: 1, 4, 6, 9, 15
Input second array elements: 2, 5, 8, 10

Output:
Merged array in ascending order = 1, 2, 4, 5, 6, 8, 9, 10, 15
*/

#include<stdio.h>
#define Max 100
int main()
{
    int arr1[Max],arr2[Max],merge_arr[Max*2] ;
    int size1,size2,index1=0,index2=0,i,merge_index ;
    printf("Enter the size of first array: ");
    scanf("%d",&size1);
    printf("Enter the size of second array: ");
    scanf("%d",&size2);
int merge_size = size1+ size2 ;
    // scan first array :
    printf("Enter the Element of first array: ");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }

    //scan second array:
     printf("Enter the Element of second array: ");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }


    for (merge_index=0;merge_index<merge_size;merge_index++)
    {
        if((index1>=size1) || (index2>=size2))
        {
            break ;
        }

        if(arr1[index1] < arr2[index2])
        {
            merge_arr[merge_index] = arr1[index1];
            index1++ ;
        }

        else
        {
            merge_arr[merge_index] = arr2[index2] ;
            index2 ++ ;
        }
    }

    // for any remaining element of first matrix:
    while(index1<size1)
    {
        merge_arr[merge_index] = arr1[index1] ;
        merge_index ++ ;
        index1++ ;
    }

    // for any remaining element of second matrix:
    while(index2<size2)
    {
        merge_arr[merge_index] = arr2[index2] ;
        merge_index ++ ;
         index2++ ;
    }

    for(i=0;i<merge_size;i++)
    {
        printf("%d ",merge_arr[i]);
    }

    return 0 ;

}
// Morshed's Tutorial
// ASM17
/* Enter the size of first array: 3
Enter the size of second array: 3
Enter the Element of first array: 1 3 5
Enter the Element of second array: 2 4 6
1 2 3 4 5 6  */

/*
Enter the size of first array: 5
Enter the size of second array: 3
Enter the Element of first array: 1 3 5 7 9
Enter the Element of second array: 2 4 6
1 2 3 4 5 6 7 9
*/





