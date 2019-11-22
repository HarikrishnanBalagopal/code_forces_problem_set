#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main(void)
{
    i64 N, M, A;
    cin >> N >> M >> A;
    i64 num_horizontal = (N / A) + (N % A == 0 ? 0 : 1);
    i64 num_vertical = (M / A) + (M % A == 0 ? 0 : 1);
    i64 num_tiles = num_horizontal * num_vertical;
    cout << num_tiles;
    return 0;
}