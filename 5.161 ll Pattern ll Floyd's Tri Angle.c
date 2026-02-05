/*Floyd's Triangle:
It is a right angled triangular array of natural number . It is defined by filling the rows of the triangle
with consecutive numbers, Starting with the number one in the top left corner.
 Enter N: 4
  1
  2 3
  4 5 6
  7 8 9 10     */

#include<stdio.h>
int main()
{
    int n,row,col ;
    printf("Enter N: ");
    scanf("%d",&n);
    int count = 1;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",count++);
        }
        printf("\n");
    }

}
// another approach : count =0 ---< printf("%d",++count);
