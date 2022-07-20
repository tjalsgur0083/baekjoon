#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    char temp;

    cin >> S;
    for(int i = 0; i < 26; i++)
    {
        temp = 97 + i;
        if(S.find(temp) > 101)
        {
            cout << "-1" << " ";
            continue;
        }

        cout << S.find(temp) << " ";
    }
}