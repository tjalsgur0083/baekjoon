#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int N = 0;
    int numbers = 0;
    vector<int> v;

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> numbers;
        v.push_back(numbers);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        printf("%d \n", v.at(i));
    }
}