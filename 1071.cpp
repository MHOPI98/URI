#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, i, sum = 0;
    cin >> x >> y;
    for (i = y + 1; i < x; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}