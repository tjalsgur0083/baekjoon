//baekjoon 10989
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10001] = {0,};
    int N = 0;

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int num = 0;
        cin >> num;
        arr[num] += 1;
    }

    for(int i = 1; i < 10001; i++)
    {
        for(int j = 0; j < arr[i]; j++)
        {
            cout << i << "\n";
        }
    } 
}