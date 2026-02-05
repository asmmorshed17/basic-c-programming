#include<stdio.h>
int main()
{   int hun,fif,tw,tn,fv,to,temp ;
   int one,pfv,ptf,ptn,pofv,poone;
    double N;
    scanf("%lf",&N);
    N = N * 100 ;
int integerN = N ;
    hun = integerN/10000 ;
    temp = integerN%10000 ;

      fif = temp/5000 ;
    temp = temp%5000 ;

      tw = temp/2000 ;
    temp = temp%2000 ;

      tn = temp/1000 ;
    temp = temp%1000 ;

      fv = temp/500 ;
    temp = temp%500 ;

      to = temp/200 ;
    temp = temp%200 ;

      one = temp/100 ;
    temp = temp%100 ;

      pfv = temp/50;
    temp = temp%50 ;

      ptf = temp/25 ;
    temp = temp%25 ;

    ptn = temp/10;
    temp = temp%10 ;

      pofv = temp/5 ;
    temp = temp%5 ;

      poone = temp/1 ;

     printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n",hun);
   printf("%d nota(s) de R$ 50.00\n",fif);
    printf("%d nota(s) de R$ 20.00\n",tw);
     printf("%d nota(s) de R$ 10.00\n",tn);
      printf("%d nota(s) de R$ 5.00\n",fv);
       printf("%d nota(s) de R$ 2.00\n",to);
        printf("MOEDAS:\n");
         printf("%d moeda(s) de R$ 1.00\n",one);
         printf("%d moeda(s) de R$ 0.50\n",pfv);
          printf("%d moeda(s) de R$ 0.25\n",ptf);
           printf("%d moeda(s) de R$ 0.10\n",ptn);
            printf("%d moeda(s) de R$ 0.05\n",pofv);
           printf("%d moeda(s) de R$ 0.01\n",poone);
}
