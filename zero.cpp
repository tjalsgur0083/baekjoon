//baekjoon 10773
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int K = 0, num = 0;
    int sum = 0, size = 0;
    stack<int> st;

    cin >> K;

    for(int i = 0; i < K; i++)
    {
        cin >> num;
        if(num != 0)
        {
            st.push(num);
        }
        else
        {
            st.pop();
        }
    }

    size = st.size();
    for(int i = 0; i < size; i++)
    {
        sum += st.top();
        st.pop();
    }
    cout << sum << endl;
    
    return 0;
}