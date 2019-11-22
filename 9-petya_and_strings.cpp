#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

char to_lower(char c)
{
    if(c >= 'a' && c <= 'z')return c;
    return c - 'A' + 'a';
}

i64 solve(string const &s1, string const &s2)
{
    i64 const N = s1.size();
    for(i64 i = 0; i < N; ++i)
    {
        char c1 = to_lower(s1[i]), c2 = to_lower(s2[i]);
        if(c1 == c2)continue;
        return c1 < c2 ? -1 : 1;
    }
    return 0;
}

int main(void)
{
    string s1, s2;
    cin >> s1 >> s2;
    i64 ans = solve(s1, s2);
    cout << ans;
    return 0;
}