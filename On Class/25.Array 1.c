#include<stdio.h>
int main()
{ int size ;
    int A[size],sum=0 ;
    printf("Entered array size:  ");
    scanf("%d",&size);

    printf("Vatiza Array er number gun maro: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
     printf("\nYou Guys Entered that: ");
    for(int i=0;i<size;i++)
    {
       printf("%d ",A[i]);
       sum+= A[i];
    }
    printf("\nVatiza Jogfol hoilo je : %d\n",sum);
}
/* Entered array size:  5
Vatiza Array er number gun maro: 1 2 3 4 5

You Guys Entered that: 1 2 3 4
Vatiza Jogfol hoilo je : 10

Process returned 0 (0x0)   execution time : 6.406 s
Press any key to continue.*/

