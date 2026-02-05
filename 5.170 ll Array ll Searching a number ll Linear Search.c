/* Searching a number in Array :
   Searching Algorithoms - 1.Linear Search 2. Binary Seach */
   #include<stdio.h>
   int main()
   {
       int num[] = {10,2,30,15,28,5} ;
       int value = 15 ;
       int pos = -1 ;

       for(int i=0;i<6;i++)
       {
          if( value == num[i] )
          {
              pos = i + 1 ;
              break ;
          }
       }

       if(pos==-1)
        printf("Number is not Found\n");
       else
        printf("The Position of %d is : %d\n",value ,pos);
       return 0 ;
   }
