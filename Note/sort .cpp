#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
bool compare1(int a, int b)
{
    return a < b;
    /*
    也可以寫
    if(a<b)
    {
        return true;
    }
    return false;
    */
}
bool compare2(string a, string b)
{
    map<char, int> dic;
    dic['H'] = 4;
    dic['S'] = 3;
    dic['D'] = 2;
    dic['C'] = 1;
    dic['2'] = 2;
    dic['3'] = 3;
    dic['4'] = 4;
    dic['5'] = 5;
    dic['6'] = 6;
    dic['7'] = 7;
    dic['8'] = 8;
    dic['9'] = 9;
    dic['T'] = 10;
    dic['J'] = 11;
    dic['Q'] = 12;
    dic['K'] = 13;
    dic['A'] = 14;
    if (a[0] != b[0] && dic[a[0]] < dic[b[0]])
    {
        return true;
    }
    else if (a[0] == b[0] && dic[a[1]] < dic[b[1]])
    {
        return true;
    }
    return false;
}
int main()
{
    /*
    1.sort函式中，需要傳入兩個參數：開始與結束位置。而由於採用左閉右開(左界包含，右界不含)的設計，
        開始位置是有放東西的第一格，結束位置是最後一個有放東西的位置的下一格。
    2.sort 隱藏的第三個參數，是比較函式。若在排序後的陣列中 A 必定要置於 B 之前
        那麼此函式在接收到 A, B 時，必須回傳 true。否則回傳 false。
    2.注意的一點是，回傳 true 的條件是，A 必定要置於 B 之前。因此若 A == B，是不可以回傳 true 的。
        回傳 true 的話，由於不管傳入 (A, B) 或是 (B, A) 都回傳 true，程式會停不下來，通常會導致 Runtime Error 的結果。
    */
    int a[5] = {1, 100, 53, 76, 8};
    sort(a, a + 4, compare1);
    // 開始 結束   比較函式
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
    string b[13] = {"D8", "H7", "C6", "SA", "H5", "C9", "S9", "HA", "H4", "C8", "CA", "H6", "HJ"};
    sort(b, b + 13, compare2);
}
