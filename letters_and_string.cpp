//baekjoon 27866
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int i = 0; //출력할 i번째 문자
    cin >> str >> i;

    cout << str[i - 1] <<endl;
}