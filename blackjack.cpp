//baekjoon 2798
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N = 0, M = 0;
    vector<int> card;
    vector<int> find;
    int total = 0;
    int result = 0;

    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        int num = 0;
        cin >> num;
        card.push_back(num);
    }
    reverse(card.begin(), card.end());

    for(int i = 0; i < N - 2; i++)
    {
        find.push_back(card.at(i));

        for(int j = i + 1; j < N - 1; j++)
        {
            find.push_back(card.at(j));

            for(int k = j + 1; k < N; k++)
            {
                find.push_back(card.at(k));
                
                total = find.at(i) + find.at(j) + find.at(k);
                if(total > result && total <= M)
                {
                    result = total;
                }
            }
        }
    } 
    cout << result << endl;

    return 0;
}