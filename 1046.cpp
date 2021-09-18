#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t = 0;
    cin >> a >> b;
    if (a < b)
    {
        t = b - a;
        cout << "O JOGO DUROU " << t << " HORA(S)" << endl;
    }
    else if (a > b)
    {
        t = 24 - (a - b);
        cout << "O JOGO DUROU " << t << " HORA(S)" << endl;
    }
    else if (a == b)
    {
        t = 24;
        cout << "O JOGO DUROU " << t << " HORA(S)" << endl;
    }

    return 0;
}