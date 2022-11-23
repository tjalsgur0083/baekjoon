//baekjoon 2587
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> num;
    int n = 0;

    for(int i = 0; i < 5; i++)
    {
        cin >> n;
        num.push_back(n);
    }
    sort(num.begin(), num.end());

    int average = 0;
    for(int i = 0; i < 5; i++)
    {
        average += num.at(i);
    }
    cout << average / 5 << "\n" << num.at(2);
}