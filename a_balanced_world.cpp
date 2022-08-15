//baekjoon 4949
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    while(1)
    {
        string input;
        getline(cin, input);

        if(input == ".")
        {
            break;
        }

        stack<char> st;
        bool data = 0;  //discriminate

        for(int i = 0; i < input.length(); i++)
        {
            char c = input[i];
            if((c == '(') || (c == '['))
            {
                st.push(c);
            }
            else if(c == ')')
            {
                if(!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    data = 1;
                    break;
                }
            }
            else if(c == ']')
            {
                if(!st.empty() && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    data = 1;
                    break;
                }
            }
        }

        if(data == 0 && st.empty())
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}