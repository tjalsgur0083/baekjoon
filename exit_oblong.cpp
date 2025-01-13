//baekjoon 1085
#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int x_point = 0, y_point = 0;
    int w_point = 0, h_point = 0;
    int min = 0, x = 0, y = 0, s1 = 0, s2 = 0;

    cin >> x_point >> y_point >> w_point >> h_point;

    x = abs(x_point - w_point);
    y = abs(y_point - h_point);
    s1 = x_point - 0;
    s2 = y_point - 0;

    min = x;
    if(y < min) min = y;
    if(s1 < min) min = s1;
    if(s2 < min) min = s2;

    cout << min << endl;
}