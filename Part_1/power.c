#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int x = -N * N;
    for (int i = 1; i < 3 * N + 1; i++)
    {
        printf("%d ", x);
        x = x + 2 * i - 1;
    }
}