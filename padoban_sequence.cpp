//baekjoon 9461
#include <iostream>
using namespace std;

long long arr[1000];

int main()
{
    int test_case = 0, N = 0;

    cin >> test_case;
    for(int i = 0; i < test_case; i++)
    {
        cin >> N;
        arr[1] = arr[2] = arr[3] = 1;

        for(int j = 4; j <= N; j++)
        {
            arr[j] = arr[j - 2] + arr[j - 3];
        }
        cout << arr[N] << "\n";
    }

    return 0;
}