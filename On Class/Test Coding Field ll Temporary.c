#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int sum=0;
    for(int j=0;j<n;j++){
    int d=0;
    for(int k=2;k<a[j];k++){
    if(a[j]%k==0){
    d=1;
    break;}
    }
    if(d==0 && a[j]>1){
    sum=sum+a[j];}
    }
    printf("%d",sum);
    }
