//Baekjoon 10810
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N = 0, M = 0;  //바구니수, 공을 넣는 횟수
    int i = 0, j = 0, k = 0; // i번 부턴 j번 바구니까지 k번의 공

    cin >> N >> M;
    vector<int> Basket(N);

    for(int num = 0; num < M; num++)
    {
        cin >> i >> j >> k;
        for(int ball = i - 1; ball < j; ball++)
        {
            Basket.at(ball) = k;
        }
    }

    for(int output = 0; output < N; output++)
    {
        cout << Basket.at(output) << endl;
    }
}