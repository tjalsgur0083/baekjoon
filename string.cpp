//baekjoon 9086
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int T = 0; //Test case의 수

    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> str;
        cout << str.front() << str.back() << endl;
    }
}