#include<stdio.h>
int main()
{
    char ch ;
    printf("Enter any character: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("This is a Small Letter\n");

    else if(ch>='A' && ch<='Z')
        printf("This is a Capital Letter\n");
    else if(ch>='0' && ch<='9')
        printf("This is a Digit\n");

    else if(ch=='@' || ch=='&' || ch=='#' || ch=='*' || ch=='$')
        printf("This is a Special Character\n");
    else
        printf("Invalid Character\n");
}
// ASM17
