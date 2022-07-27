//baekjoon 11399
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N = 0, P = 0;
    int add = 0;
    vector<int> line;

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> P;
        line.push_back(P);
    }
    sort(line.begin(), line.end());

    for(int i = 0; i < line.size(); i++)
    {
        if(i == 0)
        {
            add += line.at(i);
        }
        if(i > 0)
        {
            for(int j = 0; j <= i; j++)
            {
                add += line.at(j);
            }
        }
    }
    cout << add << endl;
}