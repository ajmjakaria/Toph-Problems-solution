/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 30.03.2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while(t--)
    {
       cin >> s;
       reverse(s.begin(), s.end());
       cout << s << endl;
    }
    return 0;
}
