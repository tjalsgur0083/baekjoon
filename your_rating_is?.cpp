//backjoon 25206
#include <iostream>
#include <string>
using namespace std;

int main() {
    string subject, grade; // 과목명, 등급
    double score = 0.0; // 학점
    double rating = 0.0, add_score = 0.0; //전공평점 학점의총합
    double add_grade = 0.0; //등급 계산

    for(int i = 0; i < 20; i++) {
        cin >> subject >> score >> grade;

        if(grade == "P") continue;
        add_score += score;

        if(grade == "F") continue;

        if(grade[0] == 'A') {
            if(grade[1] == '+') {
                add_grade += 0.5;
            }
            add_grade += 4;
        }
        else if(grade[0] == 'B') {
            if(grade[1] == '+') {
                add_grade += 0.5;
            }
            add_grade += 3;
        }
        else if(grade[0] == 'C') {
            if(grade[1] == '+') {
                add_grade += 0.5;
            }
            add_grade += 2;
        }
        else if(grade[0] == 'D') {
            if(grade[1] == '+') {
                add_grade += 0.5;
            }
            add_grade += 1;
        }
        else add_grade += 0;

        rating += score * add_grade;
        add_grade = 0.0;
    }
    cout << rating / add_score << endl;
    return 0;
}