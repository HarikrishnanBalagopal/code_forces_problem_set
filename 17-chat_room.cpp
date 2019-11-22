#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

bool solve(string const &s)
{
    string const target = "hello";
    i64 to_match = 0;
    for(char c : s)
    {
        if(c == target[to_match])++to_match;
        if(to_match >= target.size())return true;
    }
    return false;
}

int main(void)
{
    string s;
    cin >> s;
    bool ans = solve(s);

    cout << (ans ? "YES" : "NO");

    return 0;
}