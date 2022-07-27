//baekjoon 11047
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N = 0, K = 0, num = 0;
    int min = 0, temp = 0;
    int count = 0;
    vector<int> coin;

    cin >> N >> K;

    for(int i = 0; i < N; i++)
    {
        cin >> num;
        coin.push_back(num);
    }

    while(K > 0)
    {
        for(int i = 0; i < N; i++)
        {
            min = K - coin.at(0);
            temp = K - coin.at(i);
            
            if(min > temp)
            {
                min = temp;
            }
            if(min < 0)
            {
                min = K - coin.at(i - 1);
                break;
            }
        }
        count++;
        K = min;
    }
    cout << count << endl;
}