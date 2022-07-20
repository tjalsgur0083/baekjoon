//baekjoon 4344
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int C, arr[1000];
	cin >> C;

	for (int i = 0; i < C; i++)
	{
		int N;
		int temp = 0, over = 0; //temp평균계산을 위한 변수 over평균을 넘긴 학생수를 저장할 변수
		cin >> N;

		for (int j = 0; j < N; j++)
		{
			cin >> arr[j];
			temp += arr[j];
		}
		temp /= N; // temp가 각줄의 평균

		for (int j = 0; j < N; j++)
		{
			if (temp < arr[j]) // 점수가 평균을 넘긴 경우
			{
				over++;
			}
		}
		cout.precision(3);
		cout << fixed;
		cout << ((double)over / (double)N) * 100 << "%" << endl;
	}
	return 0;
}