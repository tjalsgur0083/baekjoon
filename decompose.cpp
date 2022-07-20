//baekjoon 2231
#include <iostream>
using namespace std;

int main()
{
    int num = 0, total = 0;
    int count = 0;

    cin >> num;
    
    for(int i = 1; i < num; i++)
    {
        total = i;
        count = i;

        while(count)
        {
            total = total + count % 10;
            count /= 10;
        }

        if(num == total)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}