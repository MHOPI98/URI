#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, p, temp;
    cin >> a;
    if (a > 0 && a <= 400)
    {
        p = 15;
        temp = a + ((a * p) / 100);
    }
    else if (a > 400 && a <= 800)
    {
        p = 12;
        temp = a + ((a * p) / 100);
    }
    else if (a > 800 && a <= 1200)
    {
        p = 10;
        temp = a + ((a * p) / 100);
    }
    else if (a > 1200 && a <= 2000)
    {
        p = 7;
        temp = a + ((a * p) / 100);
    }
    else
    {
        p = 4;
        temp = a + ((a * p) / 100);
    }
    cout << "Novo salario: " << fixed << setprecision(2) << temp << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << temp - a << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << p << " %" << endl;

    return 0;
}