#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

string solve(string const &s)
{
    i64 count[3] = {0, 0, 0};

    for(char c : s)
    {
        if(c == '+')continue;
        ++count[c - '1'];
    }
    string ans;
    for(i64 i = 0, i_end = count[0]; i < i_end; ++i)ans += "1+";
    for(i64 i = 0, i_end = count[1]; i < i_end; ++i)ans += "2+";
    for(i64 i = 0, i_end = count[2]; i < i_end; ++i)ans += "3+";
    ans.pop_back();

    return ans;
}

int main(void)
{
    string s;
    cin >> s;
    auto ans = solve(s);

    cout << ans;

    return 0;
}