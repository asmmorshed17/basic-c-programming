#include <stdio.h>

void myFunction() {
    int count = 0; // static ভেরিয়েবল
    count++;
    printf("Count = %d\n", count);
}

int main() {
    myFunction(); 
    myFunction(); 
    myFunction(); 
    return 0;
}
