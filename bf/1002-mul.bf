#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two digits: ");
    scanf("%1d%1d", &a, &b); // read only one digit at a time

    int result = a * b;
    printf("Result: %d\n", result);
    return 0;
}
