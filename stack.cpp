//baekjoon 10828
#include <iostream>
#include <string>
using namespace std;

int stack_size = 0;
int arr[10001];

void push(int a)
{
    arr[stack_size] = a;
    stack_size++;
}
int pop()
{
    if(stack_size == 0)
    {
        return -1;
    }
    int pop = arr[stack_size - 1];
    stack_size--;
    return pop;
}
int size()
{
    return stack_size;
}
int top()
{
    if(stack_size == 0)
    {
        return -1;
    }
    return arr[stack_size - 1];
}
int empty()
{
    if(stack_size == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int N = 0;

    cin >> N;
    while(N--)
    {
        string str;
        cin >> str;
        if(str == "push")
        {
            int n = 0;
            cin >> n;
            push(n);
        }
        if(str == "pop")
        {
            cout << pop() << endl;
        }
        if(str == "top")
        {
            cout << top() << endl;
        }
        if(str == "size")
        {
            cout << size() << endl;
        }
        if(str == "empty")
        {
            cout << empty() << endl;
        }
    }
    return 0;
}