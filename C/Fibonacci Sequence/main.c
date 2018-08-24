// Michael Lam
// August 23, 2018
// Fibonacci sequence. I want a sequence named after myself too.

// Declaring header files
#include <stdio.h>

// Declaring functions
unsigned long long fibonacci(int);

int main() {
    // Declaring variables
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
        printf("%Ld ", fibonacci(i));    
    
    return 0;
}

unsigned long long fibonacci(int n) {
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}