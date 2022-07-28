//baekjoon 2480
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    int max = 0;

    cin >> a >> b >> c;

    if(a == b && a == c && b == c)
    {
        cout << 10000 + (a * 1000) << endl;
    }
    else if(a == b || a == c)
    {
        cout << 1000 + (a * 100) << endl;
    }
    else if(b == c)
    {
        cout << 1000 + (b * 100) << endl;
    }
    else
    {
        if(a > b && a > c)
        {
            max = a;
        }
        if(b > a && b > c)
        {
            max = b;
        }
        if(c > a && c > b)
        {
            max = c;
        }
        cout << max * 100 << endl;
    }

}