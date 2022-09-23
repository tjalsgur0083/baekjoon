//baekjoon 1912
#include <iostream>
#include <algorithm>
using namespace std;

int max_num[100001], num[100001];

int main()
{
    int N = 0;

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> num[i];
        max_num[i] = num[i];
    }

    int sum = max_num[0];
    
    for(int i = 0; i < N; i++)
    {
        max_num[i] = max(max_num[i], max_num[i - 1] + num[i]);
        if(max_num[i] > sum)
        {
            sum = max_num[i];
        }
    }
    cout << sum << endl;

    return 0;
}