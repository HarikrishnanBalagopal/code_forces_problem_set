#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

bool is_lucky(i64 x)
{
    while(x > 0)
    {
        i64 d = x % 10;
        if(d != 4 && d != 7)return false;
        x /= 10;
    }

    return true;
}

bool is_almost_lucky(i64 x)
{
    if(is_lucky(x))return true;

    for(i64 i = 2; i * i <= x; ++i)
    {
        if((x % i == 0) && (is_lucky(i) || is_lucky(x / i)))return true;
    }

    return false;
}

int main(void)
{
    i64 X;
    cin >> X;
    auto ans = is_almost_lucky(X);

    cout << (ans ? "YES" : "NO");

    return 0;
}