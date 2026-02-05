#include<stdio.h>

int min(int a,int b){
 if(a<b) return a; 
 
 return b;

}
int main(){   
    //int x = 5 ,y =1 ;

    printf("%d\n",max(1,3));
    printf("%d\n",max(13,19));
    printf("%d\n",max(10,25));
    return 0;
}
/*
3
19
25
*/