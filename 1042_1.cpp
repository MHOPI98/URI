#include <bits/stdc++.h>
using namespace std;

void Sort(int arr[], int n)
{
    int i, j, temp;
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
}

void input(int arr[], int arr2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
}
void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
void output2(int arr2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << endl;
    }
}

int main()
{
    int n = 3;
    int arr[n], arr2[n];

    input(arr, arr2, n);
    Sort(arr, n);
    output(arr, n);

    cout << endl;
    output2(arr2, n);

    return 0;
}