#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main(void)
{
    i64 N, count = 0;
    cin >> N;
    for(i64 i = 0; i < N; ++i)
    {
        i64 a, b, c;
        cin >> a >> b >> c;
        if(a + b + c >= 2)++count;
    }
    cout << count;
    return 0;
}