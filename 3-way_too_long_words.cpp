#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

string solve(string &s)
{
    if(s.size() <= 10)return s;
    string ans;
    ans += s.front();
    ans += to_string(s.size() - 2);
    ans += s.back();
    return ans;
}

int main(void)
{
    i64 N;
    cin >> N;
    for(i64 i = 0; i < N; ++i)
    {
        string s;
        cin >> s;
        auto ans = solve(s);
        cout << ans << "\n";
    }
    return 0;
}