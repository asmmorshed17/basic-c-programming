#include<stdio.h>
int main()
{
    int units,bill=0 ;
    printf("Enter any unit: ");
    scanf("%d",&units);

    if(units<=100)
    {bill = units*5 ;}

    else if(units<=200)
    {bill = (100*5) + (units-100)*10 ; }

    else
      {bill = (100*5) +  (100*10) + (units-200)*15 ; }

      printf("The Utility Bill = %d\n",bill);
      return 0;
  
}
