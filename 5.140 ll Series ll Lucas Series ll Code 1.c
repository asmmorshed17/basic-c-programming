// Lucas Series:
#include<stdio.h>
int main()
{
    int numberTerms ;
    printf("Enter the number of terms in Lucas Series  : ");
    scanf("%d",&numberTerms);

    int first=2,second=1,next,i;
    printf("Lucas Series up to %d terms : \n",numberTerms);
    printf("%d %d ",first,second);

    for(i=3;i<=numberTerms;i++)
    {
      next = first + second ;
      printf("%d ",next);
      first = second ;
      second = next ;
    }
    printf("\n");
return 0 ;
}
//  In lucas Series the first term is = 2 and the second term is = 1 ; then it continue as well as the fibonacci series
