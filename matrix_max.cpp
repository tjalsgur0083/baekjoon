//baekjoon 2566
#include <iostream>
using namespace std;

int main()
{
    int arr[10][10] = {0,};
    int max = 0;
    int line = 0, row = 0;

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] >= max) 
            {
                max = arr[i][j];
                line = i + 1;
                row = j + 1;
            }
        }
    }
    cout << max << "\n" << line << " " << row << "\n";
}