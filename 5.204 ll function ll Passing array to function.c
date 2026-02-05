// 5.204 ll function ll Passing array to function
#include<stdio.h>

void display(int x[])
{
    int i ;
    for(i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
}


int main()
{
    int num[] = {10,20,30,40,50};
    display(num);
}


/*
#include<stdio.h>
int main()
{
    int num[] = {10,20,30,40,50};
    int i;

    for(i=0;i<5;i++)
    {
        printf("%d ",num[i]);
    }
}
// 10 20 30 40 50
*/
