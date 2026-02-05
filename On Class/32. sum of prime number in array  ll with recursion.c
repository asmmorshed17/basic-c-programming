#include <stdio.h>
#include <math.h>

// Function to check if a number is prime using trial division
int isPrime(int num) {
    if (num <= 1) return 0; // Numbers ≤ 1 are not prime
    if (num == 2) return 1; // 2 is the only even prime number
    if (num % 2 == 0) return 0; // Exclude other even numbers

    // Check divisibility from 3 to sqrt(num), skipping even numbers
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, sum = 0; // Initialize sum to 0
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of prime numbers in the array
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }

    // Print the sum of prime numbers
    printf("%d\n", sum);
    return 0;
}
