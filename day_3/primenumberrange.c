#include<stdio.h>

int main() {
    int n, k, i;

    printf("Enter range: ");
    scanf("%d", &k);

    for(n = 2; n <= k; n++) {
        for(i = 2; i < n; i++) {
            if(n % i == 0) {
                break;
            }
        }

        if(i == n) {
            printf("%d ", n);
        }
    }

    return 0;
}