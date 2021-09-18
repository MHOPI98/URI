#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, pos, max, i;
    for (i = 0; i < 100; i++)
    {
        cin >> n;
        if (n > max)
        {
            max = n;
            pos = i;
        }
    }
    cout << max << endl;
    cout << pos + 1 << endl;
    return 0;
}