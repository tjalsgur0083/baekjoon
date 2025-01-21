//baekjoon 11650
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num = 0;
    int input_x = 0, input_y;
    vector<pair<int, int> > point;

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> input_x >> input_y;
        point.push_back({ input_x, input_y });

    }

    sort(point.begin(), point.end());
    for(int i = 0; i < point.size(); i++) {
        cout << point[i].first << " " << point[i].second << "\n";
    }

    return 0;
}