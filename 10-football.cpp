#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

bool solve(string const &s)
{
    i64 count = 0;
    bool is_ones = s[0] == '1';

    for(char c : s)
    {
        if((c == '1' && is_ones) || (c == '0' && !is_ones))
        {
            ++count;
            if(count >= 7)return true;
        }
        else
        {
            is_ones = !is_ones;
            count = 1;
        }
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