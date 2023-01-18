//baekjoon 1181
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
    if(a.length() == b.length()) return a < b;
    else return a.length() < b.length();
}

string oder[20001];
int main()
{    
    int N;

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> oder[i];
    }
    sort(oder, oder + N, compare);
    for(int i = 0; i < N; i++)
    {
        if(oder[i] == oder[i - 1]) continue;
        cout << oder[i] << '\n';
    }
}