#include <stdio.h>

int main() {
    int end;

    printf("Enter end number: ");
    scanf("%d", &end);

    for (int n = 1; n <= end; n++) {
        int temp = n, sum = 0, digits = 0;

        while (temp > 0) {
            digits++;
            temp =temp/ 10;
        }

        temp = n;

        while (temp > 0) {
            int rem = temp % 10;
            sum =sum +(rem*rem*rem);
            temp =temp/ 10;
        }

        if (sum == n) {
            printf("%d ", n);
        }
    }

    return 0;
}