#include <bits/stdc++.h>
#define n 5
using namespace std;
int main()
{
    int arr[n], pos = 0,
                neg = 0, par = 0, im = 0, i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            im++;
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << im << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;
    return 0;
}