#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, i, t1 = 0, t2 = 1, t3 = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return 0;
}