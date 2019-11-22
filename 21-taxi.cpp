#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main(void)
{
    i64 N;
    cin >> N;
    int counts[4] = {0, 0, 0, 0};

    for(i64 i = 0, x; i < N; ++i)
    {
        cin >> x;
        ++counts[x - 1];
    }

    i64 num_cars = 0;
    num_cars += counts[3]; // all groups of 4 need a full car each.

    num_cars += counts[2]; // all groups of 3 need a car each but can fit in groups of 1.
    counts[0] = max(0, counts[0] - counts[2]);

    num_cars += (counts[1] / 2); // pairs of groups of 2 need a full car each.
    counts[1] %= 2;

    num_cars += (counts[0] / 4); // 4 groups of size 1 need a full car each.
    counts[0] %= 4;

    if(counts[1] == 1)
    {
      // a single group of 2 is left over.
      if(counts[0] <= 2)++num_cars; // can fit left over groups of 1 and single group of 2 in one car.
      else num_cars += 2; // too many groups of 1, need 2 cars.
    }
    else
    {
      // all groups of 2 finished.
      if(counts[0])++num_cars; // a few groups of 1 left over.
    }

    cout << num_cars;

    return 0;
}