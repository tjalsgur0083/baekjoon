//baekjoon 3003
#include <iostream>
using namespace std;

int main()
{
    int king = 1, queen = 1, rook = 2, bishop = 2, knight = 2, pawn = 8;
    int k = 0, q = 0, r = 0, b = 0, n = 0, p = 0;
    
    cin >> k >> q >> r >> b >> n >> p;
    cout << king - k << " ";
    cout << queen - q << " ";
    cout << rook - r << " ";
    cout << bishop - b << " ";
    cout << knight - n << " ";
    cout << pawn - p << " ";
}