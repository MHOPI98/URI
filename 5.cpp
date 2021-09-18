#include <bits/stdc++.h>
#include <algorithm>
#define N 2001
#define MAX 10000
using namespace std;

int a[N], b[N], t[N];
bool BellmanFord(int n, int m)
{
    int d[N];
    fill(d, d + n, MAX);
    d[0] = 0;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < m; j++)
            if (d[a[j]] != MAX)
                if (d[a[j]] + t[j] < d[b[j]])
                    d[b[j]] = d[a[j]] + t[j];

    for (int j = 0; j < m; j++)
        if (d[a[j]] + t[j] < d[b[j]])
            return true;

    return false;
}

int main()
{
    int Case, n, m;

    cin >> Case;
    while (Case--)
    {
        int i;

        cin >> n >> m;
        for (i = 0; i < m; i++)

            cin >> a[i] >> b[i] >> t[i];

        puts(BellmanFord(n, m) ? "possible" : "not possible");
    }

    return 0;
}
