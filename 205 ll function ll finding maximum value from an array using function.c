// 205 || function ||  finding maximum value from an array using function
#include<stdio.h>
int maximum(int x[])
{
    int max=x[0],i ;
    for(i=1;i<6;i++)
    {
        if(max<x[i])
        {
            max = x[i];
        }
    }
    return max ;
}

int main()
{
    int num[] = {10,30,50,90,38,53};
    int max_value = maximum (num);
    printf("The Maximum element in this array is: %d",max_value);
}
// The Maximum element in this array is: 90
