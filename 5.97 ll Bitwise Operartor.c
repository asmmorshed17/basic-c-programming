#include<stdio.h>
int main()
{
    int a=32 , b=12 ,c ;

    c = a & b ;
    printf("a & b = %d\n",c);  // bitwise AND = & ---> multifications

    c = a | b ;
    printf("a | b = %d\n",c); // bitwise OR = | -----> addition

    c = a ^ b ;
    printf("a ^ b = %d\n",c); // bitwise ExOR ----> if input is same same then output = 0
}
