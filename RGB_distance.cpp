//baekjoon 1149
#include <iostream>
#include <algorithm>
using namespace std;

int house[1001][3];

int main()
{
    int N = 0;
    int price[3];

    cin >> N;
    for(int i = 1; i <= N; ++i)
    {
        cin >> price[0] >> price[1] >> price[2];
        house[i][0] = min(house[i - 1][1], house[i - 1][2]) + price[0];
        house[i][1] = min(house[i - 1][0], house[i - 1][2]) + price[1];
        house[i][2] = min(house[i - 1][1], house[i - 1][0]) + price[2];
    }
    cout << min(house[N][2], min(house[N][0],house[N][1])) << endl;

    return 0;
}