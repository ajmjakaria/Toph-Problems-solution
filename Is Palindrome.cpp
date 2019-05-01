/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 05.03.2019
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, s;
    cin >> str;
    s  = str;
    reverse(str.begin(), str.end());
    cout << ((str == s) ? "Yes" : "No") << endl;
    return 0;
}

