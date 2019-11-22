#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main(void)
{
    i64 dist = 0;
    for(i64 r = 0, x; r < 5; ++r)
    {
        for(i64 c = 0; c < 5; ++c)
        {
            cin >> x;
            if(x == 1)
            {
                dist = abs(r - 2) + abs(c - 2);
                break;
            }
        }
    }

    cout << dist;

    return 0;
}