#include<stdio.h>
int main()
{
    int num,sum=0 ;
    printf("Enter the last  number : ");
    scanf("%d",&num);

    printf("Series: ");
    for(int i=1;i<=num;i=i+2)
    {
        sum = sum + i;
        if(i==num || i+2>num)
            {printf("%d ",i);}
        else
           {
               printf("%d + ",i);
           }
    }
    printf("= %d",sum);
}
