// Write a program that can take some numbers and display Minimum :
#include<stdio.h>
int main()
{
    int num[12],n,i ;
    printf("How many Numbers: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        {
            printf("num[%d] : ",i);
            scanf("%d",&num[i]);
        }

        int minimum = num[0];
        for(i=1;i<n;i++)
        {
          if(minimum>num[i])
            minimum = num[i];
        }

        printf("The Minimum Number: %d\n",minimum);
        return 0 ;
    }
/* How many Numbers: 5
num[0] : 3
num[1] : 5
num[2] : 9
num[3] : 1
num[4] : 2
The Minimum Number: 1
                          */
