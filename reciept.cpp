//baekjoon 25304
#include <iostream>
using namespace std;

int main()
{
    long long X = 0;
    int N;

    cin >> X >> N;

    int a = 0, b = 0;
    int total = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> a >> b;
        total += a * b;
    }

    if(total == X) {cout << "Yes\n";}
    else {cout << "No\n";}
}