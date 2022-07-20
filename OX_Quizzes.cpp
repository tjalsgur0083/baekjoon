//baekjoon 8958
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int num = 0, score = 0, total = 0;
    string test_case = "";
    vector<string> v;
    vector<int> final_output;

    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> test_case;
        v.push_back(test_case);

        total = 0;
        score = 0;
        test_case = v[i];

        for(int j = 0; j < test_case.length(); j++)
        {
            if(test_case[j] == 'O')
            {
                score++;
                total += score;
            }
            else
            {
                score = 0;
            }
        }
        final_output.push_back(total);
    }
    for(int i = 0; i < final_output.size(); i++)
    {
        cout << final_output.at(i) << endl;
    }
}