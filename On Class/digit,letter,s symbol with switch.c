#include<stdio.h>
int main()
{
      char ch ;
     int digit,choice ;


    printf("1.To see the Number\n");
    printf("2.To see the character\n");

    printf("Enter your Choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter a Digit: ");
            scanf("%d",&digit);

            if(digit>=0 && digit<=9)
            {
                printf("Number");
            }
            break ;
        }

    case 2:
        {
            printf("Enter a Character: ");
            scanf("%c",&ch);

            if(ch>='a' && ch<='z')
             {
                 printf("This is a Small Letter\n");
             }
             else if(ch>='A' && ch<='Z')
             {
                 printf("This is a Capital Letter\n");
             }
             else if(ch=='@' || ch=='*' || ch=='#' || ch=='&')
             {
                 printf("This is a Special Symbol\n");
             }
             else
                  {
                      printf("This is not a character\n");
                  }

                  break ;

        }
    default :
       {
          printf("Invalid character\n");

       }
    }
}