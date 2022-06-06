#include <stdio.h>

void Print_Factorial(const int N);

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial(const int N)
{
    int num[3001] = {0};//用于记录每一位 
    int ans = 1;
    int tmp = 0; //用于记录每一位和i相乘的临时结果
    int k = 0; //用于记录当前最大的下标 
    int carry = 0; //来自低位别的进位 
    if (N < 0)
        printf("Invalid input\n");
    else if (N >= 0 && N < 12) {
        for (int i = 1; i <= N; i++)
            ans = ans * i;
        printf("%d\n", ans);
    } else {
        num[0] = 1;
        for (int i = 2; i <= N; i++) {
            for (int j = 0; j <= k; j++) {
                tmp = num[j] * i + carry;
                num[j] = tmp % 10;
                carry = tmp / 10;
            }
            //tmp=tmp/10;
            while (carry) //本轮乘完最高位还有进位 
            {
                num[++k] = carry % 10;
                carry = carry / 10;
                //k++;
            }
        }
        for (int i = k; i >= 0; i--)
            printf("%d", num[i]);
        printf("\n");
    }
}