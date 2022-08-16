//baekjoon 1009
#include <iostream>
using namespace std;

int main()
{
	int T;			//test case
	int a, b;		//test case에 대한 정수 a와b

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int temp = 1;
		cin >> a;
		cin >> b;

		for (int j = 0; j < b; j++)
		{
			temp *= a;
			temp /= 10;
		}
		if (temp == 0)
		{
			cout << 10 << endl;
		}

		else
			cout << temp << endl;
	}
}