#include <stdio.h>
#include <string.h>

int main() {
    int n, x = 0; // Initialize x to 0
    char statement[4]; // To hold the input statement (++X, X++, --X, X--)

    // Input the number of statements
    scanf("%d", &n);

    // Loop through each statement
    for (int i = 0; i < n; i++) {
        scanf("%s", statement); // Read the statement

        // Check if the statement contains "++"
        if (strstr(statement, "++")) {
            x++; // Increment x
        } else {
            x--; // Decrement x
        }
    }

    // Output the final value of x
    printf("%d\n", x);

    return 0;
}
 

