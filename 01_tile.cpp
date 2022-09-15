//baekjoon 1904
#include <iostream>
#define nu 15746
using namespace std;

long long arr[1000001];

int main()
{
    int N = 0;

    cin >> N;
    arr[1] = 1 % nu;
    arr[2] = 2 % nu;

    for(int i = 3; i <= N; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % nu;
    }
    cout << arr[N] << "\n";

    return 0;
}