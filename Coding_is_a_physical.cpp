//baekjoon 25413
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int input = 0, tmp = 0;
    string str;

    cin >> input;
    tmp = input / 4;

    for(int i = 0; i < tmp; i++)
    {
       str += "long ";
    }    
    cout << str << "int" << endl;
}