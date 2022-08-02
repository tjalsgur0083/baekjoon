//beakjoon 1427
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string num = "";
    int min = 0;

    cin >> num;

    sort(num.rbegin(), num.rend());

    for(int i = 0; i < num.size(); i++)
    {
        cout << num.at(i);
    }

    return 0;
}