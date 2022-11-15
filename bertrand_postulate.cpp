//baekjoon 4948
#include <iostream>
#include <cmath>
using namespace std;

bool prime(int num)
{
    int root = 0;
    if(num == 1) return 0;

    root = sqrt(num);
    for(int i = 2; i <= root; i++)
    {
        if(num % i == 0) return 0;
    }   
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int  n;
    while(1)
    {
        cin >> n;

        int count = 0;

        if(n == 0) break;

        for(int i = n + 1; i <= 2 * n; i++)
        {
            if(prime(i)) count += 1;
        }
        cout << count << "\n";
    }
}