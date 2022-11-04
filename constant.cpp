//baekjoon 2908
#include <iostream>
using namespace std;

int main()
{
    int fir_num = 0;
    int sec_num = 0;
    int f_res = 0, s_res = 0;
    int f_num = 0, s_num = 0;

    cin >> fir_num >> sec_num;
    f_res = fir_num;
    s_res = sec_num;
    for(int i = 0; i < 3; i++)
    { 
        if(i == 0)
        {  
            fir_num /= 10;
            f_res %= 10;
            f_num = f_res * 100;
        }
        else if(i == 1)
        {
            f_res = fir_num / 10;
            fir_num %= 10;
            f_num += (fir_num * 10);
        }
        else
            f_num += f_res;
    }

    for(int i = 0; i < 3; i++)
    { 
        if(i == 0)
        {  
            sec_num /= 10;
            s_res %= 10;
            s_num = s_res * 100;
        }
        else if(i == 1)
        {
            s_res = sec_num / 10;
            sec_num %= 10;
            s_num += (sec_num * 10);
        }
        else
            s_num += s_res;
    }

    if(f_num > s_num)
        cout << f_num << endl;
    else
        cout << s_num << endl;
}