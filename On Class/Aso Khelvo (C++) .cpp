
#include<stdio.h>
#include<string.h>

void swap(char &x ,char &y){
    char tmp = x ;
    x = y ;
    y = tmp ;
}


void reverse(char s[]){
    int len = strlen(s);

    for(int i=0,j=len-1;i<j;i++,j--){
        swap(s[i], s[j]);
    }
}

int is_palindrome(char s[]){
    int len = strlen(s);

    char tmp[len+1];
    for(int i=0;i<len;i++){
        tmp[i] = s[i] ;
    }

    reverse(tmp);
    //printf("Reversed String: %s\n",tmp);
    for(int i=0;i<len;i++){
        if(s[i]!=tmp[i]){
            return 0;
        }
    }

    return 1;
}




int main(){
char s[100];
scanf("%s", s);

if(is_palindrome(s)){
    printf("Palindrome\n");
}
else{
    printf("Not Palindrome\n");
}

    return 0;
}
