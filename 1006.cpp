#include <bits/stdc++.h>
using namespace std;
int main()
{
    double A, B, C, MEDIA, X;
    cin >> A >> B >> C;
    X = ((A * 2.0) + (B * 3.0) + (C * 5.0));
    MEDIA = (X) / (10.0);
    // printf("MEDIA = %.1lf\n", MEDIA);
    cout << fixed << setprecision(1) << "MEDIA = " << MEDIA << endl;
    return 0;
}