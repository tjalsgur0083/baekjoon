//baekjoon 10988
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word, r_word;

    cin >> word;
    r_word = word;
    reverse(word.begin(), word.end());

    if(word == r_word) cout << "1" << endl;
    else cout << "0" << endl;

    return 0; 
}