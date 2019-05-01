/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.03.2019
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double a, b, c, s = 0;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        s = (a+b+c)/2;
        double tmp = (s * (s-a) * (s-b) * (s-c));
        if(tmp < 0) cout << "Oh, No!" << endl;
        else cout << setprecision(2) << fixed << sqrt(tmp) << endl;
    }
    return 0;
}

