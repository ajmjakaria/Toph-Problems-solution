/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 18.03.2019
*/

#include <bits/stdc++.h>
using namespace std;
int arr[100005];
#define mx 100005

int seive(int x, int a)
{
    bool prime[mx+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=sqrt(mx); p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=sqrt(mx); i += p)
                prime[i] = false;
        }
    }
    int cnt = 0;
    for (int p=x; p<=a; p++)
       if (prime[arr[p]])
            cnt++;
    return cnt;
}
int main()
{
    int n, q = 0, a, ind, x, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> q;
    while(q--)
    {
        cin >> ind >> x >> a;
        if(ind == 1){
            cout << seive(x, a) << endl;
        }
        else if(ind == 2 && arr[x] != a){
            arr[x] = a;
        }
    }
    return 0;
}

