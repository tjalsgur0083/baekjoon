//baekjoon 10813
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int basket[100];
    int N = 0, M = 0; //바구니의 수, 교환 횟수
    int i = 0, j = 0; //i번 바구니, j번 바구니

    cin >> N >> M;
    int initial = 1;
    for(int index = 0; index < N; index++)
    {
        basket[index] = initial;
        initial++;
    }

    for(int input = 0; input < M; input++)
    {
        int tmp = 0;
        cin >> i >> j;

        tmp = basket[i - 1];
        basket[i - 1] = basket[j - 1];
        basket[j - 1] = tmp;
    }

    for(int output = 0; output < N; output++)
    {
        cout << basket[output] << endl;
    }
}