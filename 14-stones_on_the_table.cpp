#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

i64 solve(string const &s)
{
    char prev = 'X';
    i64 ans = 0;
    for(char c : s)
    {
        if(c == prev)++ans;
        else prev = c;
    }
    return ans;
}

int main(void)
{
    int N;
    cin >> N;
    string s;
    cin >> s;
    i64 ans = solve(s);
    cout << ans;

    return 0;
}