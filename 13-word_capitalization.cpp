#include<bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main(void)
{
    string s;
    cin >> s;
    if(s[0] >= 'a' && s[0] <= 'z')s[0] = s[0] - 'a' + 'A';
    cout << s;

    return 0;
}