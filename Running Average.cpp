/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 05.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        sum += a;
        cout << setprecision(5) << fixed << (double)sum/i << endl;
    }
    return 0;
}
