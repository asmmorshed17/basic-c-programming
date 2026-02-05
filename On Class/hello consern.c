#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d %d %d\n",i,j,k);
                if(j==3)
                {
                    goto out;
                   
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    out:
        printf("Came out of the loop\n");
}
