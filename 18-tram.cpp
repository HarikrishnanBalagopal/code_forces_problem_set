#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main(void)
{
    i64 N, num_curr = 0, num_max = 0;
    cin >> N;
    for(i64 i = 0; i < N; ++i)
    {
        i64 num_exit, num_enter;
        cin >> num_exit >> num_enter;
        num_curr -= num_exit;
        num_curr += num_enter;
        num_max = max(num_max, num_curr);
    }

    cout << num_max;

    return 0;
}