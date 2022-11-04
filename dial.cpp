//baekjoon 5622
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    string dial;
    int total = 0;

    cin >> dial;
    for(int i = 0; i < dial.length(); i++)
    {
        total += arr[dial.at(i) - 65];
    }

    cout << total << endl;
}