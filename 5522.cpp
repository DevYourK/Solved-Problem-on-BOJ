#include <stdio.h>

int main() {
    int a[6];
    a[5] = 0;

    scanf("%d\n%d\n%d\n%d\n%d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    for(int i=0; i<5; i++) {
        a[5] += a[i];
    }

    printf("%d", a[5]);
}