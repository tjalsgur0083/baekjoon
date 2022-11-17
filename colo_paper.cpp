//baekjoon 2563
#include <iostream>
using namespace std;

int main()
{
    int N = 0, count = 0;
    int arr[101][101] = {0,};
    int x = 0, y = 0;

    cin >> N;
    while(N--)
    {
        cin >> x >> y;
        for(int i = y; i < y + 10; i++)
        {
            for(int j = x; j < x + 10; j++)
            {
                if(!arr[i][j])
                {
                    count++;
                    arr[i][j] = 1;
                }
            }
        }
    }
    cout << count;
}