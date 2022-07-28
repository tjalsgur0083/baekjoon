//baekjoon 2562
#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int max = 0, count = 0;
    
    for(int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        if(max < arr[i])
        {
            max = arr[i];
            count = i + 1;
        }
    }
    cout << max << "\n" << count << endl;
}