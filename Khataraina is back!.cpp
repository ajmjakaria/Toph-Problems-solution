/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 26.03.2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c, d, e, f;
    for(int i = 1; i <= t; i++)
    {
        cin >> a >> b >> c >> d >> e >> f;
        if((e >= 0 && f >= 0) && ((e-c)*(d-b) == (c - a) * (f - d)))
            printf("Case #%d: Bravo! Adnan vai!\n", i);
        else printf("Case #%d: Poor Adnan vai! God bless you!\n", i);
    }
    return 0;
}


