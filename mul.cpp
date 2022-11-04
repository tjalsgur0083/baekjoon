//baekjoon 2588
#include <iostream>
using namespace std;

int main()
{
    int a_num = 0, b_num = 0;
    int arr[4] = {0,};

    cin >> a_num >> b_num;
    for(int i = 0; i < 3; i++)
    {
        cout << a_num * (b_num % 10) << endl;
        arr[i] = a_num * (b_num % 10);
        b_num /= 10;
    }
    cout << arr[0] + (arr[1] * 10) + (arr[2] * 100) << endl;
}