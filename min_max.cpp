#include <iostream>
using namespace std;

int main()
{
    int arr[1000000];
    int N = 0;

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for(int i = 0; i < N; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    int max = arr[0];
    for(int i = 0; i < N; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << min << " " << max << endl;
}