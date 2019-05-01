/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 03.03.2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        double r;
        cin >> r;
        double res = (4*r*2*r - 2*r*r*3.1416);
        printf("Case %d: %.2lf\n", i, res);
    }
    return 0;
}
