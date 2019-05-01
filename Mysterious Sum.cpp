/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 30.03.2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> a >> b;
        printf("Case %d: %d%d\n", i, a+b, a-b);

    }
    return 0;
}
