//baekjoon 1193
#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int i = 1;

    cin >> num;
    while(num > i) {
        num -= i;
        i++;
    }
    if(i % 2 == 1) {
        printf("%d/%d", i - num + 1, num);
    }
    else {
        printf("%d/%d", num, i - num + 1);
    }
    return 0;
}