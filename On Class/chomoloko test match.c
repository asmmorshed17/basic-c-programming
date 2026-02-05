#include<stdio.h>
int main(){
int N ;
scanf("%d",&N);



while(N>9)
{
    int sum = 0;
    int temp = N ;

    while(temp!=0)
    {
        sum+=(temp%10);
        temp/=10 ;
    }
    N = sum ;
}

printf("%d\n",N);
return 0;

}
