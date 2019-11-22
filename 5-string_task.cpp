#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

bool is_upper(char c)
{
    return c >= 'A' && c <= 'Z';
}

bool is_vowel(char c)
{
    if(is_upper(c))c = c - 'A' + 'a';
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

string solve(string &s)
{
    string ans;
    for(char c : s)
    {
        if(is_vowel(c))continue;
        if(is_upper(c))c = c - 'A' + 'a';
        ans += '.';
        ans += c;
    }
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