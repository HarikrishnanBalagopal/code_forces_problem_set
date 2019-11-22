#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main(void)
{
    i64 K, N, W;
    cin >> K >> N >> W;

    i64 total = ((W * (W + 1)) / 2) * K;
    cout << (N >= total ? 0 : total - N);

    return 0;
}