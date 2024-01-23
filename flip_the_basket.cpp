//baekjoon 10811
#include<iostream>
using namespace std;

int main()
{
    int basket[100] = {0,};
    int sub_basket[100] = {0,};

    int N = 0, M = 0; // N개의 바구니 M번 실행
    int i = 0, j = 0; // i번 바구니, j번 바구니
    cin >> N >> M;

    int index_number = 1;
    for(int index = 0; index < N; index++)
    {
        basket[index] = index_number;
        index_number++;
    }
    
    for(int input = 0; input < M; input++)
    {
        cin >> i >> j;
        index_number = i;
        for(int reverse = j; reverse >= i; reverse--)    //역순을 sub_basket에 저장하고 basket에 역전된 값을 삽입하는 부분
        {
            sub_basket[index_number - 1] = basket[reverse - 1];
            index_number += 1;
        }

        for(int input = i - 1; input < j; input++)
        {
            basket[input] = sub_basket[input];
        }
    }

    for(int output = 0; output < N; output++)
    {
        cout << basket[output] << endl;
    }
}