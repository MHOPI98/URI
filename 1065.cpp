#include <bits/stdc++.h>
#define n 5
using namespace std;
int main()
{
    int arr[n];
    int i, count = 0;

    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << count << " valores pares" << endl;

    return 0;
}