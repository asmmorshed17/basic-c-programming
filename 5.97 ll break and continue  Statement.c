#include<stdio.h>
int main()
{
    int i ;
    for(i=1;i<=20 ; i++)
    {
      if(i%3==0)
        continue ;      //continue = bypass - >continue kaj korle abar loop e pathy dive,niche jete dibe na
        printf("%d\n",i);

      if(i==10)
        break;   // loop terminate

    }
}
