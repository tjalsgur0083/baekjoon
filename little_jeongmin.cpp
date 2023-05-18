//baekjoon 11382
#include <iostream>
using namespace std;

long long triple_add(long long a, long long b, long long c)
{
    return a + b + c;
}

int main()
{
    long long tmp = 1, tmp_2 = 0, tmp_3 = 0;

    cin >> tmp >> tmp_2 >> tmp_3;
    cout << triple_add(tmp, tmp_2, tmp_3) << endl;
}