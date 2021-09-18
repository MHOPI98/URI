#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
        {
            cout << "NULL" << endl;
        }
        else if (a % 2 == 0)
        {
            if (a > 0)
            {
                cout << "EVEN POSITIVE" << endl;
            }
            else
            {
                cout << "EVEN NEGATIVE" << endl;
            }
        }
        else
        {
            if (a < 0)
            {
                cout << "ODD NEGATIVE" << endl;
            }
            else
            {
                cout << "ODD POSITIVE" << endl;
            }
        }
    }
    return 0;
}