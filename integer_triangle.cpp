//baekjoon 1932
#include <iostream>
#include <algorithm>
using namespace std;

int dp[501][501];

int main()
{
    int n = 0, max_num = 0;;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cin >> dp[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0)
            {
                dp[i][j] = dp[i - 1][0] + dp[i][j];
            }
            else if (i == j)
            {
                dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j] + dp[i][j], dp[i - 1][j - 1] + dp[i][j]);
            }

            max_num = max(max_num, dp[i][j]);
        }
    }
    cout << max_num << endl;

    return 0;
}