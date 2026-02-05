//A.S.M.Morshed.(IIT 7)
/*
Problem : Sum of Prime Numbers in an Array

Description: Write a C program that takes an array of integers and finds the sum of all prime numbers in the array.

Input:

5
2 3 4񂵘

Output:
10         */

#include<stdio.h>
#define max_size 100
int main()
{
    int arr[max_size],i,size, sum=0 ;
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        int count =0 ;
        if(arr[i]<=1)
               {
                   count++ ;
                   continue ;
               }

        for(int j=2;j*j<=(arr[i]);j++)
        {
            if(arr[i]%j==0)
            {
              count++ ;
              break ;
            }

        }

        if(count ==0)
        {
          sum = sum + arr[i];
        }


    }
    printf("%d\n",sum);
}


