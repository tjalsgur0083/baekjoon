//baekjoon 11651
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(const pair<int, int>& n, const pair<int, int>& m) {
    if(n.second == m.second) return n.first < m.first;
    return n.second < m.second;
}
int main() {
    vector<pair<int, int>> point;
    int x = 0, y = 0, num = 0;

    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> x >> y;
        point.push_back({x, y});
    }
    sort(point.begin(), point.end(), compare);

    for(int i = 0; i < point.size(); i++) {
        cout << point[i].first << " " << point[i].second << "\n";
    }
    return 0;
}