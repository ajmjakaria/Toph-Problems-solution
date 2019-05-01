/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 18.03.2019
*/

#include <bits/stdc++.h>
using namespace std;
int arr[100005];
#define mx 100005
int SieveOfEratosthenes(int x, int a)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[mx+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=mx; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i=p*p; i<=mx; i += p)
                prime[i] = false;
        }
    }
    int cnt = 0;
    // Print all prime numbers
    for (int p=x; p<=a; p++)
       if (prime[arr[p]])
            cnt++;
    return cnt;
          //cout << p << " ";
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
            cnt = 0;
            cout << SieveOfEratosthenes(x, a) << endl;
        }
        else if(ind == 2 && arr[x] != a){
            arr[x] = a;
        }
    }
    return 0;
}
