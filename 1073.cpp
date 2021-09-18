#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, sqr = 2;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "^" << sqr
                 << " = " << i * i << endl;
        }
    }

    return 0;
}