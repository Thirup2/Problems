#include <stdio.h>

int Count_Digit(const int N, const int D);

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

int Count_Digit(const int N, const int D)
{
    int temp;
    if (N < 0) {
        temp = -N;
    } else {
        temp = N;
    }
    int count[10] = {0};
    int n;
    do {
        n = temp % 10;
        count[n]++;
        temp /= 10;
    } while (temp);
    return count[D];
}