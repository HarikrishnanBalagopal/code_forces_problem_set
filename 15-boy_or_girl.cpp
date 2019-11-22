#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main(void)
{
    string s;
    cin >> s;
    unordered_set<char> set_s(s.begin(), s.end());
    bool is_male = set_s.size() % 2 == 1;
    cout << (is_male ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}