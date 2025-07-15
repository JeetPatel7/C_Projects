#include <stdio.h>

int main() {
    int num, i;
    double factorial = 1; 

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("Factorial of %d is : %.2lf\n", num, factorial);
    }

    return 0;
}
