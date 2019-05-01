/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///*/
///Abu Jafar MD Jakaria 04.12.2019

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    //freopen("input5.txt", "r", stdin);
    //freopen("output5.txt", "w", stdout);
    cin >> t;
    double ocd, oa, oc;
    for(int i = 1; i <= t; i++)
    {
        cin >> ocd >> oa >> oc;
        double area = (0.5*oc*oc*sin(ocd)) - 0.5*oa*oa*ocd;
        printf("Case %d: %.8lf\n", i, area);
    }
    return 0;
}
