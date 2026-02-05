//A.S.M.MORSHED
//MUH2425001M
#include<stdio.h>
int main()
{
    int N ;
    scanf("%d",&N);

    int flag = 1 ;
    int i = 2 ;
    int temp = N+1 , result  ;

while(flag!=0)
{
    for(int i=2;i*i<=temp;i++)
    {
        if(temp%i!=0)
        {   flag = 0 ;
           result = temp ;
            break ;
        }
    }


    temp++ ;
}

    printf("%d %d\n",result,result-N);
}
