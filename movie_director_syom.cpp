//baekjoon 1436
#include <iostream>
using namespace std;

int main()
{
    int N = 0, num = 0, name = 0, temp = 0;
    cin >> N;

    while(num != N)
    {
        name++;
        temp = name;

        while(temp != 0)
        {
            if(temp % 1000 == 666)
            {
                num++;
                break;
            }
            else
            {
                temp /= 10;
            }
        }
    }
    cout << name << endl;
} 