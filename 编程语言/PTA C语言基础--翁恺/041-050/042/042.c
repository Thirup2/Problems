// 模拟除法
#include <stdio.h>
int main(void)
{
    int x = 0, s = 0, n = 0;
    scanf("%d", &x);
    while (s < x) {
        s = s * 10 + 1;
        ++n;
    }
    while (1) {
        printf("%d", s / x);
        s %= x;
        if (s == 0) {
            break;
        }
        s = s * 10 + 1;
        ++n;
    }
    printf(" %d", n);
    return 0;
}