// String : Number of capital - small letters- digits
#include<stdio.h>
int main()
{
    char str[50] ;
    int capital,small,digits ;

    int i=capital=small = digits = 0 ;
    printf("Enter a string: ");
    gets(str);

    while(str[i] !='\0')
    {
      if(str[i]>=65 && str[i]<=90)
        capital++ ;
      else if(str[i]>=97 && str[i]<=122)
        small ++ ;

      else if(str[i]>=48 && str[i]<=57)
        digits++ ;

      i++ ;
    }

    printf("Number of capital letter = %d\n",capital);
    printf("Number of small letter = %d\n",small);
    printf("Number of digits = %d\n",digits);
    getch();
}
/*
Enter a string: Amelia Rahman21
Number of capital letter = 2
Number of small letter = 10
Number of digits = 2

*/
