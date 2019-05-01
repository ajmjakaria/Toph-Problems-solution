/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 31.03.2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, res = 1;
    cin >> n;
    while(n != 0)
    {
        if(n%2) res *= 2;
        n /= 2;
    }
    cout << (res - 1) << endl;
    return 0;
}
