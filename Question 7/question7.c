#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n, i, count;

    while (1) {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &n);
        if (n == 0)
            break;

        if (n < 2) {
            printf("%d is not prime\n", n);
            continue;
        }

        count = 0;
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {  // Check if i is a divisor of n
                count++;
            }
        }

        if (count == 2) {
            printf("%d is prime\n", n);
        } else {
            printf("%d is not prime\n", n);
        }
    }

    return 0;
}
