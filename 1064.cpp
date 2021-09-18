#include <bits/stdc++.h>
#define n 6
using namespace std;
int main()
{
    double arr[n], total = 0, b;
    int i, sum = 0;

    for (i = 0; i < 6; i++)
    {
        cin >> arr[i];

        if (arr[i] > 0)
        {
            sum = sum + 1;
            total += arr[i];
            b = (total / sum);
        }
    }
    cout << sum << " valores positivos" << endl;
    cout << fixed << setprecision(1) << b << endl;

    return 0;
}