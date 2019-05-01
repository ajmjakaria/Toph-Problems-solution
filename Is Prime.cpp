/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 05.03.2019
*/

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    scanf("%d",&n);
    cout << ((isPrime(n) == true)?"Yes" : "No") << endl;
    return 0;
}
