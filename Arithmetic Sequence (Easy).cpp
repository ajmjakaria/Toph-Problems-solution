/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 31.03.2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, m1, sum = 0;
    cin >> n;
    sum = n*(n+1)/2;
    cin >> m;
    while(m--)
    {
        cin >> m1;
        sum -= m1;
    }
    cout << sum << endl;
    return 0;
}
