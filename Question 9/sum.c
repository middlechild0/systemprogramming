#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
