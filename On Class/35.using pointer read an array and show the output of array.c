#include<stdio.h>
int main()
{
    int arr[5] ;
    int *ptr =&arr[0];   // *ptr= arr
printf("Input Sample : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",(ptr+i));  // ptr is a pointer , which point a value, so no &.
    }

    printf("\nOutput : ");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*(ptr+i));
    }
}

//Input Sample : 10 20 30 40 50

// Output : 10     20      30      40      50
