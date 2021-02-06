#include<stdio.h>

int is_prime(int n)
{
    int i;

    if (n < 2) { // (i < 2) cilo

        return 0;
    }

    for (i = 2; i < n; i++) {

        if (n % i == 0) {

            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int n;
    printf("Please, enter a number(enter 0 to exit):");

    while (1) {

        scanf("%d", &n);
        if (n == 0) {

            // break;
        }

        if (1 == is_prime(n)) {

            printf("%d is a prime number.\n", n);
            // break;
        }

        else {

            printf("%d is not a prime number.\n", n);
            // break;
        }
    }
}