//baekjoon 1157
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr;
    int c_index = 0, max = 0;;
    int in_arr[27] = {0,};

    cin >> arr;
    for(int i = 0; i < arr.length(); i++)
    {
        if('a' <= arr[i] && arr[i] <= 'z')
            arr[i] -= 32;
        in_arr[arr[i] - 65]++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(in_arr[i] > max)
        {
            max = in_arr[i];
            c_index = i;
        }
    }

    int count = 0;
    for(int i = 0; i < 26; i++)
    {
        if(in_arr[i] == max)
        {
            count++;
        }
        if(count >= 2)
        {
            cout << "?" << endl;
            return 0;
        }
    }

    cout << (char)(c_index + 65) << endl;
    return 0;
}