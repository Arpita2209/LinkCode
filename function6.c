#include <stdio.h>
void factor(int num);
void factorial(int num);
void power(int a, int b);

int main() {
    int num, a, b;
    printf("Enter a number to find factor: ");
    scanf("%d", &num);
    factor(num);
    printf("\nEnter a number to find factorial: ");
    scanf("%d", &num);
    factorial(num);
    printf("\nEnter base and power: ");
    scanf("%d %d", &a, &b);
    power(a, b);

    return 0;
}

void factor(int num) {
    printf("Factors of %d are: ",num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    printf("Factorial of %d is %d\n", num, fact);
}

void power(int a, int b) {
    int result = 1;
    for (int i = 1; i <= b; i++) {
        result = result * a;
    }
    printf("%d^%d = %d\n", a, b, result);
}