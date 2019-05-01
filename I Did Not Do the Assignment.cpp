/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 07.03.2019
*/

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(!isPrime(n))
        cout << "NO PUNISHMENT\n";
    else
    {
        while(n--) cout <<"I DID NOT DO THE ASSIGNMENT.\n";
    }
    return 0;
}
