#include <stdio.h>

int main() {
    int n, i, j = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n], temp[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        if(a[i] != 0)
            temp[j++] = a[i];
    }

    while(j < n)
        temp[j++] = 0;

    printf("Array after moving zeros to end:\n");
    for(i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}