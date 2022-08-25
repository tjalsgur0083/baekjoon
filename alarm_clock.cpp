//baekjoon 2884
#include <iostream>
using namespace std;

int main()
{
	int Hclock = 0 , Mclock = 0;
	int minusClock = 0;

	cin >> Hclock >> Mclock;

	Mclock -= 45;

	if (Mclock < 0)
	{
		Mclock += 60;
		Hclock--;
	}
	if (Hclock < 0)
	{
		Hclock += 24;
	}
	cout << Hclock << " " << Mclock << endl;
}