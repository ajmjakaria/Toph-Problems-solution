/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 26.03.2019
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n;
    cin >> t;
    ll b = 1;
    for(int i = 1; i <= t; i++)
    {
        cout << i << " " << b << endl;
        b += i+1;
    }
    return 0;
}
