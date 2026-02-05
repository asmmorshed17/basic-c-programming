#include<stdio.h>
int main()
{
    int x=10 ;

    printf("%d\n",x++);
    printf("%d\n",x);
    printf("%d\n",++x);
    printf("%d\n",x);
    printf("%d\n",x--);
    printf("%d\n",--x);

    return 0;
}
// Output : 10 . 11.  12 . 12 . 12 . 10

