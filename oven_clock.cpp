#include <iostream>
using namespace std;

int main()
{
    int A, B, C = 0; // A : 현재 시각(시), B : 현재 시각(분), C : 요리하는데 필요한 시간(분)
    int tmp = 0;

    cin >> A >> B >> C;
    
    tmp = C + B;
    if(tmp > 59)
    {
        A = A + (tmp / 60);
        tmp %= 60;
    }

    
    if(A > 23)
    {
        A %= 24;
    }
    cout << A << " " << tmp << endl;
    return 0;
}