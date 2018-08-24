// Michael Lam
// August 23, 2018
// Factorials. also wow r e c u r s i o n

// Declaring header files
#include <stdio.h>

// Declaring functions
unsigned long long factorial(int);

int main()
{
    // Declaring variables
    int n;
    
    printf("Enter a number between 0 and 20: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error: factorials do not exist for negative numbers. Please try again.");
    } else if (n >= 0 && n <= 20) {
        printf("%2s%13s\n", "n", "Factorial");
        for (int i = 1; i <= n; i++) {
            printf("%2d! = %Ld\n", i, factorial(i));
        }
    } else {
        printf("Error: inputted number cannot be greater than 20 due to system limitations. Please try again.");
    }
    
    return 0;
}

unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
