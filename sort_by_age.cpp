//baekjoon 10814
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct Users {
    string name;
    int age;
};

bool compare(const Users& a, const Users& b) {
    return a.age < b.age;
}

int main() {
    vector<Users> users_vector;
    int input_user = 0;
    cin >> input_user;

    for(int i = 0; i < input_user; i++) {
        Users u;
        cin >> u.age; 
        cin >> u.name;

        users_vector.push_back(u);
    }
    
    stable_sort(users_vector.begin(), users_vector.end(), compare);

    for(const auto& u:users_vector) {
        cout << u.age << " " << u.name << "\n";
    }
    return 0;
}