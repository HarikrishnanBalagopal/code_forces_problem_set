#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main(void)
{
    i64 N;
    cin >> N;
    i64 force_x = 0, force_y = 0, force_z = 0;

    for(i64 i = 0; i < N; ++i)
    {
        i64 x, y, z;
        cin >> x >> y >> z;
        force_x += x;
        force_y += y;
        force_z += z;
    }

    bool is_in_eq = force_x == 0 && force_y == 0 && force_z == 0;

    cout << (is_in_eq ? "YES" : "NO");

    return 0;
}