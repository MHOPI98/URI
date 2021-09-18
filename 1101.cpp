#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, sum = 0, temp, i;
    while (1)
    {
        cin >> m >> n;
        if (m <= 0 || n <= 0)
        {
            break;
        }
        else
        {
            if (m > n)
            {
                temp = m;
                m = n;
                n = temp;
            }
            for (i = m; i <= n; i++)
            {
                cout << i << " ";
                sum += i;
            }
        }
        cout << "sum=" << sum << endl;
    }

    return 0;
}