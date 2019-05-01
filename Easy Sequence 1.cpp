/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 26.03.2019
*/


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll dp[105];
int main()
{
    ll x;
    int t;
    dp[1]=1;
    dp[2]=2;
    for(int i=1; i<=50; i++)
    {
        dp[2*i]=dp[i]*dp[i]+1;
        dp[(2*i)+1]=dp[i]*dp[i+1]+2;
    }
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> x;
        printf("Case %d: ", i);
        for(int j=1; j <= 100; j++)
        {
            if(x==dp[j])
            {
                cout << j << endl;
                break;
            }
        }
    }
    return 0;
}
