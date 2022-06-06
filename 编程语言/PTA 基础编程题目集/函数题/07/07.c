#include <stdio.h>
#include <math.h>

int IsTheNumber(const int N);

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for (i = n1; i <= n2; i++) {
        if (IsTheNumber(i)) {
            cnt++;
        }
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

int IsTheNumber(const int N)
{
    int p[10] = {0};
    int n;
    int temp = N;
    int m = sqrt(N);
    if (m * m == N) {
        while (temp) {
            n = temp % 10;
            p[n]++;
            temp /= 10;
        }
        for (int i = 0; i < 10; ++i) {
            if (p[i] > 1) {
                return 1;
            }
        }
    }
    return 0;
}