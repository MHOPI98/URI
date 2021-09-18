#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y, d;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (y == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            d = x / y;
            cout << fixed << setprecision(1) << d << endl;
        }
    }

    return 0;
}