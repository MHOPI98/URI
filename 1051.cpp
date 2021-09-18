#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, a, b, c, d;
    cin >> n;
    if (n <= 2000)
    {
        cout << "Isento" << endl;
    }
    else
    {
        if (n > 2000 && n <= 3000)
        {
            a = n - 2000;
            a = ((a * 8) / 100);
            d = a;
        }
        else if (n > 3000 && n <= 4500)
        {
            a = n - 2000;
            b = a - 1000;
            a -= b;
            a = ((a * 8) / 100);
            b = ((b * 18) / 100);
            d = a + b;
        }
        else
        {
            a = n - 2000;
            b = a - 1000;
            c = b - 1500;
            a -= b;
            b -= c;
            a = ((a * 8) / 100);
            b = ((b * 18) / 100);
            c = ((c * 28) / 100);
            d = a + b + c;
        }
        cout << "R$ " << fixed << setprecision(2) << d << endl;
    }

    return 0;
}