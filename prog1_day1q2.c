
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Sum=%d, ", a + b);
    printf("Diff=%d, ", a - b);
    printf("Product=%d, ", a * b);
    printf("Quotient=%d", a / b);

    return 0;
}
