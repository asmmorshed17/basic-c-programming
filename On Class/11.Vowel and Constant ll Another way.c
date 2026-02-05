#include<stdio.h>
int main()
{
    char ch ;
    printf("Enter a character: ");
    scanf("%c",&ch);
    int lower_case_vowel = (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    int upper_case_vowel = (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');

    if(lower_case_vowel || upper_case_vowel)
    {
        printf("%c is a Vowel\n",ch);
    }
    else
        printf("%c is a Consonant\n",ch);
}
