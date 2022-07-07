#include <cstdio>
#include <cmath>

void hanoi(int first, int second, int third, int n)
{
    if (n == 1)
    {
        printf("%d %d\n", first, third);
    }
    else
    {
        hanoi(first, third, second, n - 1);
        printf("%d %d\n",first, third);
        hanoi(second ,first, third, n - 1);
    }
}
int main()
{
    int N = 0;
    scanf("%d", &N);
    printf("%d \n", (int)pow(2, N) - 1);;
    hanoi(1, 2, 3, N);
}