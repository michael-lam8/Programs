// Michael Lam
// August 24, 2018
// Tower of Hanoi algorithm

// Declaring header files
#include <stdio.h>

int main() {
    // Declaring variables
    int n; // Number of disks
    printf("Enter the total number of disks: ");
    scanf("%d", &n);
    moveDisk(n, 1, 3, 2);
    return 0;
}

int moveDisk(int n, int source, int dest, int temp) {
    if (n == 1) {
        printf("Disk 1 was moved from rod %d to rod %d.\n", source, dest);
        return;
    }
    moveDisk(n - 1, source, temp, dest);
    printf("Disk %d was moved from rod %d to rod %d.\n", n, source, dest);
    moveDisk(n - 1, temp, dest, source);
}
