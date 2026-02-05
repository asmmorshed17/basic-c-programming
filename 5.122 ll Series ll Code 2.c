// 1*3*4 + 2*5*6 + 3*7*8 + N1*N2*N3
#include<stdio.h>
int main()
{
    int n1,n2,n3,a=1,b=3,c=4,sum = 0;
    printf("Enter a , b ,c : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    printf("1*3*4 + 2*5*6 + 3*7*8 + n1*n2*n3");
    while(a<=n1 && b<=n2 && c<=n3)
    {
        sum = sum + (a*b*c);
        a+=1 ;
        b+=2;
        c+=2 ;
    }
    printf(" = %d\n",sum);
    getch();
}
