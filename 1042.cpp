#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3], arr2[3], n, temp, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr2[i] << endl;
    }

    return 0;
}