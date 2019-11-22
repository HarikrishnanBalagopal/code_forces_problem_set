#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main(void)
{
    i64 N, x = 0;
    cin >> N;
    for(i64 i = 0; i < N; ++i)
    {
        string s;
        cin >> s;
        if(s[0] == '+' || s[1] == '+' || s[2] == '+')++x;
        else --x;
    }
    cout << x;
    return 0;
}