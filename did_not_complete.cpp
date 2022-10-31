//baekjoon 5597
#include <iostream>
using namespace std;

int main()
{
    int arr[31] = {0,};
    int input;

    for(int i = 1; i <= 28; i++)
    {
        cin >> input;
        arr[input] = 1;
    }
    for(int i = 1; i <= 30; i++)
    {
        if(arr[i] == 0) {cout << i << endl;}
    }
}