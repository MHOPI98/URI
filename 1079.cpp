#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, d, sum = 0;
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        d = ((a * 2) + (b * 3) + (c * 5));
        sum = d / 10;
        cout << fixed << setprecision(1) << sum << endl;
    }

    return 0;
}