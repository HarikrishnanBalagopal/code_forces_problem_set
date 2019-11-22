#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

i64 solve(vector<i64> const &xs, i64 const N, i64 const K)
{
    i64 ans = K;
    i64 threshold = xs[K - 1];
    if(threshold > 0)
    {
        auto it = upper_bound(xs.begin(), xs.end(), threshold, greater<i64>());
        return distance(xs.begin(), it);
    }
    else
    {
        // threshold is 0.
        auto it = lower_bound(xs.begin(), xs.end(), 0, greater<i64>());
        return distance(xs.begin(), it);
    }
}

int main(void)
{
    i64 N, K;
    cin >> N >> K;
    vector<i64> xs;
    xs.reserve(N);

    for(i64 i = 0; i < N; ++i)
    {
        i64 x;
        cin >> x;
        xs.emplace_back(x);
    }
    auto ans = solve(xs, N, K);
    cout << ans << "\n";
    return 0;
}