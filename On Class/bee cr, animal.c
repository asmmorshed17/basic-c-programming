#include<stdio.h>
int main()
{
    char A[14],B[14],C[14] ;
    scanf("%s %s %s",&A[14],&A[14],&A[14]);

    if(A[14]=='vertebrado')
    {
        if(B[14] == 'ave')
        {
            if(C[14]=='carnivoro')
                printf("aguia\n");
            else
                printf("pomba\n");

        }
        else if(B[14] == 'mamifero')
        {
          if(C[14]=='onivoro')
                printf("homem\n");
            else
                printf("vaca\n");

        }

    }




   else if(A[14]=='invertebrado')
    {
        if(B[14] == 'inseto')
        {
            if(C[14]=='hematofago')
                printf("pulga\n");
            else
                printf("pomba\n");

        }
        else if(B[14] == 'anelideo')
        {
          if(C[14]=='hematofago')
                printf("sanguessuga\n");
            else
                printf("minhoca\n");

        }

    }
}


