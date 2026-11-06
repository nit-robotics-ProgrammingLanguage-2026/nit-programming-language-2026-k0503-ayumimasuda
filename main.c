#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    // 仕様に合わせた条件分岐
    if (n < 0 || n >= 10 || n == 5) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}
