#include<stdio.h>
int prime (int n){
for(int i=2;i<=(n/2);i++)
{
    if(n%i==0)
    {
        return 0 ;
    }
}
    return 1 ;

}

int main()
{
    int num ;
    printf("Enter a number: ");
    scanf("%d",&num);

    int call = prime ;
    if(call)
    {
        printf("%d is Prime\n",num);
    }
    else
    {
        printf("%d is not not Prime\n",num);
    }
}
