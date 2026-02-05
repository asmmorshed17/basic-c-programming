#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a=1,b=2;
    printf("Enter a and b : ");
    scanf("%d %d",&n1,&n2);

    printf("1*2 + 2*3 + 3*4 + ...... + %d*%d",n1,n2);
    while(a<=n1 && b<=n2)
    {
        sum = sum + (a*b);
        a+=1;
        b+=1;
    }
    printf(" = %d\n",sum);
    return 0;
}
// Enter a and b : 8 9
//  1*2 + 2*3 + 3*4 + ...... + 8*9 = 240
