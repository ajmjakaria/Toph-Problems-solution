/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 09.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, n, t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> a >> b >> c >> n;
        if((b-a) == (c-b)) {
            n = a+(n-1)*(b-a);
            printf("Case %d: %d\n", i, n);
        }
        else printf("Case %d: Error\n", i);
    }
    return 0;
}
