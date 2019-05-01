/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 07.03.2019
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, a, lo, mid, hi, cnt = 0;
    cin >> n >> a;
    lo = 1, hi = n;
    while(lo < hi)
    {
        mid = (lo+hi)/2;
        cnt++;
        if(a > mid) lo = mid+1;
        else hi = mid;
    }
    cout << cnt << endl;
    return 0;
}
