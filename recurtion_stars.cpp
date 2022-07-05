#include <iostream>
using namespace std;

void fractal(int i, int j, int N)
{   
    if(N == 1)
    {
        cout << "*"; 
    }
    else if (i / (N / 3) % 3 == 1 && j / (N / 3) % 3 == 1)
    {
        cout << " ";
    }
    else
    {
        fractal(i, j, N/3);
    }
    
}
int main()
{
    int N = 0;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            fractal(i , j, N);
        }
        cout << "\n";
    }
    return 0;
}