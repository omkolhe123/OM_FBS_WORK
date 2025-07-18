#include <stdio.h>

int main() {
    int n, rev;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    if (n < 99 || n > 999)
        return printf("Invalid input. Enter a 3-digit number.\n");

    rev = (n % 10) * 100 + ((n / 10) % 10) * 10 + n / 100;

    printf("%d is %sa palindrome.\n", n, (n == rev) ? "" : "not ");
    return 0;
}
