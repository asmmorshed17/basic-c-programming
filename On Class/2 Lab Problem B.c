//A.S.M.MORSHED
//MUH2425001M
#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int even_count = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even_count++ ;
        }
    }
    printf("%d\n",even_count);
    return 0;
}
