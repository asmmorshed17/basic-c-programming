#include<stdio.h>
#include<math.h>
int square(int a)
{
    return pow(a,2);
}

int main()
{
    int num ;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The square of this number is : %d",square(num));
}
//Enter a number: 5
// The square of this number is : 25
