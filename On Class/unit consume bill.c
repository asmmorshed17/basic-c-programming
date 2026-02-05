
#include<stdio.h>
int main()
{
    int unit,bill=0;
    printf("Enter unit: ");
    scanf("%d",&unit);

    if(unit>=0 && unit<=100)
    {
      bill = unit*5 ;
      printf("Net Bill =%d\n",bill);
    }

    else if(unit>=101 && unit<=200)
    {
      bill = (100*5) + (unit-100)*10 ;
      printf("Net Bill =%d\n",bill);
    }

    else if(unit>200)
    {
      bill = (100*5) + (100*10)+(unit-200)*15 ;
      printf("Net Bill =%d\n",bill);
    }


    return 0;
}
