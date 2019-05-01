/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 30.03.2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    double p;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        double sum = 0.0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> p;
            sum += p;

        }
        printf("Case %d: %.3lf\n", i, (sum/(double)n));

    }
    return 0;
}
