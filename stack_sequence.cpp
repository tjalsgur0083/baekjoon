//baekjoon 1874
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    stack<int> s;
    vector<char> v;
    int count = 1;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        while(count <= num)
        {
            s.push(count);
            count++;
            v.push_back('+');
        }

        if(s.top() == num)
        {
            s.pop();
            v.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << '\n';
    }
}