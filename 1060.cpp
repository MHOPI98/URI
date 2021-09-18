#include <bits/stdc++.h>
#define n 6
using namespace std;
int main()
{
    double arr[n];
    int i, count = 0;

    for (i = 0; i < 6; i++)
    {
        cin >> arr[i];

        if (arr[i] > 0)
        {
            count++;
        }
    }
    cout << count << " valores positivos" << endl;

    return 0;
}