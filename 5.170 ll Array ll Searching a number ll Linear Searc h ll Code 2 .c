#include<stdio.h>
int main()
{
    int num[] = {10,3,5,64,32,62,11,87,9,17,39,23,47};
    int value ,pos = -1 ;
    printf("Enter the value you want to Search : ");
    scanf("%d",&value);

    for(int i=0;i<13;i++)
    {
        if(value ==num[i])
        {
            pos = i + 1 ;
            break ;
        }

    }
    if(pos==-1)
        printf("Item is not Found\n");
    else
        printf("The Value is found at Position : %d \n",pos);
}
