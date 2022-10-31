//baekjoon 10807
#include <iostream>
using namespace std;

int main()
{
    int arr[101];
    int N = 0;

    cin >> N;
    int input = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        arr[i] = input;
    }
    int v = 0;
    int count = 0;
    cin >> v;
    for(int i = 0; i < N; i++)
    { 
        if(arr[i] == v){count++;}
    }
    cout << count << endl;
}