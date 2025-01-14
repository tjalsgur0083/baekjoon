//baekjoon 10798
#include <iostream>
using namespace std;

int main() {
    char line[5][15] = {0,};
    
    for(int i = 0; i < 5; i++) {
        cin >> line[i];
    }

    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 5; j++) {
            if(line[j][i] != '\0') {
                cout << line[j][i];
            }
        }
    }
    return 0;
}