//baekjoon 11021
#include <iostream>
using namespace std;

int main()
{
	int T = 0;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		int total = 0;
		int Fnum = 0, Lnum = 0;

		cin >> Fnum >> Lnum;
		total = Fnum + Lnum;

		cout << "Case #" << i << ": " << total << endl;
	}
}