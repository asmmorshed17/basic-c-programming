#include<stdio.h>
int main()
{
    char ch ;
    printf("Enter any Character : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("Capital Letter\n");

    else if(ch>='a' && ch<='z')
        printf("Small Letter\n");

    else
        printf("Not a Letter\n");

    return 0;

}
