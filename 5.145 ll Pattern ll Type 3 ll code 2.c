//5.145 ll Pattern ll Type 3 ll code 2

#include<stdio.h>
int main(){
int n,row ,col ;
printf("Enter n : ");
scanf("%d",&n);

for(row=1;row<=n ;row++)
{
    for(col=1;col<=row;col++)
    {
       printf("# ",col);
    }
 printf("\n");
    }

    for(row=n-1;row>=1 ;row--)
{
    for(col=1;col<=row;col++)
    {
       printf("# ",col);
    }
 printf("\n");
    }

}


/* Enter n : 5
#
# #
# # #
# # # #
# # # # #
# # # #
# # #
# #
#
                          */
