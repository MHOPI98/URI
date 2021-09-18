#include <bits/stdc++.h>
using namespace std;
int main()
{
    double X, Y;
    cin >> X >> Y;
    if (X == 1)
    {
        Y *= 4.00;
    }
    else if (X == 2)
    {
        Y *= 4.50;
    }
    else if (X == 3)
    {
        Y *= 5.00;
    }
    else if (X == 4)
    {
        Y *= 2.00;
    }
    else
    {
        Y *= 1.50;
    }
    cout << "Total: R$ " << setprecision(2) << fixed << Y << endl;

    return 0;
}