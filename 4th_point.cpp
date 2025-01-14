//baekjoon 3009
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> x_point, y_point;
    int x_count = 0, y_count = 0;
    int count = 0;

    for(int i = 0; i < 3; i++) {
        cin >> x_count >> y_count;
        x_point.push_back(x_count);
        y_point.push_back(y_count);
    }

    if(x_point[0] == x_point[1]) {
        cout << x_point[2] << " ";
    }
    else if(x_point[0] == x_point[2]) {
        cout << x_point[1] << " ";
    }
    else
        cout << x_point[0] << " ";


    if(y_point[0] == y_point[1]) {
        cout << y_point[2] << " ";
    }
    else if(y_point[0] == y_point[2]) {
        cout << y_point[1] << " ";
    }
    else
        cout << y_point[0] << " ";
}