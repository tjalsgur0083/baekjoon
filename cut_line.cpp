//baekjoon 25305
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N = 0 , k = 0;
    vector<int> grade;
    int g = 0;

    cin >> N >> k;
    for(int i = 0; i < N; i++)
    {
        cin >> g;
        grade.push_back(g);
    }

    sort(grade.begin(), grade.end());
    cout << grade.at(N - k) << endl;
}