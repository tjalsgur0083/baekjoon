//baekjoon 2738
#include <iostream>
using namespace std;

int main()
{
    int arr[101][101], t_arr[101][101];
    int N = 0, M = 0;

    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> t_arr[i][j];
        }
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cout << arr[i][j] + t_arr[i][j] << " " ;
        }
        cout << "\n";
    }
}