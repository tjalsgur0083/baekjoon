//baekjoon 2439
#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T ; i++)
	{
		for (int j = 0; j < (T - 1) - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
		
	}
}