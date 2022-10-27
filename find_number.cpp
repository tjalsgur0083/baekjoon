//baekjoon1920
#include <iostream>
#include <algorithm>
using namespace std;

int N,M;
int arr[100001];

void bi_search(int num)
{
    int first = 0, last = N - 1;
    int mid;

    if(last < first)
        return;
    while (last >= first)
    {
        mid = (first + last) / 2;
        if(arr[mid] == num)
        {
            cout << "1" << "\n";
            return;
        }
        else if(arr[mid] > num) {last = mid - 1;}
        else {first = mid + 1;}
    }
    cout << "0" << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0); 
    int num;
    
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> num;
        arr[i] = num;
    }
    sort(arr, arr + N);
    
    cin >> M;
    for(int i = 0; i < M; i++)
    {
        cin >> num;
        bi_search(num);
    }
}