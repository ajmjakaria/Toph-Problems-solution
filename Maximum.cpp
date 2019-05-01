/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 05.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 1, a;
    cin >> n;
    while(n--)
    {
        cin >> a;
        flag = max(flag, a);
    }
    cout << flag << endl;
    return 0;
}
