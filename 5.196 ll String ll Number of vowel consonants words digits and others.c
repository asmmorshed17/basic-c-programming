// String: Number of vowels, consonants, words, digits and others
#include<stdio.h>
int main()
{
    char str[100],ch ;
    int i,vowel,consonant,digit,word,other ;

    printf("Enter a string: ");
    gets(str);

    i=vowel=consonant=word=digit=other=0 ;  // i --> for each index
    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' ||  ch=='U'  )
            vowel++ ;

        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonant++ ;

        else if (ch>='0' && ch<='9')
            digit++ ;
            else if(ch==' ')
            word++ ;
        else
            other++ ;

        i++ ;
    }
    word++ ; // for first one word

    printf("Number of vowels=%d\n",vowel);
    printf("Number of Consonants=%d\n",consonant);
    printf("Number of words=%d\n",word);
    printf("Number of digits=%d\n",digit);
    printf("Number of others=%d\n",other);
    }

    /*
Enter a string: A s m morshed1703 @$
Number of vowels=3
Number of Consonants=7
Number of words=5
Number of digits=4
Number of others=2   */

