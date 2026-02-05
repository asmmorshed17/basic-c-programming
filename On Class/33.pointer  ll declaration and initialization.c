#include <stdio.h>

int main() {

    // An integer variable
    int a = 10;

    // Create a pointer to integer (declaration)
    int * ptr;

    // Store the address of a inside pointer (initialization)
    ptr = &a;

      // Print the content of ptr
      printf("ptr = %p\n", ptr);

    // Get the value pointed by ptr (dereferencing)
    printf("*ptr = %d", *ptr);

      return 0;
}

//  ptr = 000000000061FE14
// *ptr = 10
