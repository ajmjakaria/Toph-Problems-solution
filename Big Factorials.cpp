/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.03.2019
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll c, n, fact = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
        fact = fact % 10000;
    }
    cout << fact << endl;
    return 0;
}
