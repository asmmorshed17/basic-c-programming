 // Series : Fibonacci Series : 0 1 1 2 3 5 8 13 21..................
#include<stdio.h>
int main(){
int first=0,second=1,fibo,count=0,n;
printf("Enter Range of fibonacci Series: ");
scanf("%d",&n);

while(count<n)
{
    if(count<=1)
    {
        fibo = count ;
    }
    else
    {
        fibo = first + second ;
        first = second ;
        second = fibo ;
    }
    printf("%d ",fibo);
    count++ ;
}
getch();


}
// Enter Range of fibonacci Series: 18
// :  0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597
