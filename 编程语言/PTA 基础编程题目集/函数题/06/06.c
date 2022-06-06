#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node
{
    int Data;
    PtrToNode Next;
};
typedef PtrToNode List;

int FactorialSum(List L);

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for (i = 0; i < N; i++) {
        p = (List) malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L; L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}

int FactorialSum(List L)
{
    List p = L;
    int sum = 0;
    while (p) {
        int n = 1;
        for (int i = 2; i <= p->Data; ++i) {
            n *= i;
        }
        sum += n;
        p = p->Next;
    }
    return sum;
}