#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int closestInteger(int num) {
    int lower_root = sqrt(num);
    int higher_root = lower_root + 1;

    if (abs(num - lower_root * lower_root) <= abs(num - higher_root * higher_root)) {
        return lower_root * lower_root;
    } else {
        return higher_root * higher_root;
    }
}

int main() {
    int input;

    while (1) {
        printf("Enter a positive integer: ");
        scanf("%d", &input);

        if (input <= 0) {
            printf("Please enter a positive integer.\n");
        } else {
            break;
        }
    }

    int closest = closestInteger(input);
    printf("The closest integer with a whole number square root to %d is %d.\n", input, closest);

    return 0;
}
