/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 05.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0) cnt++;
    }
    cout << cnt-1 << endl;
    return 0;
}

