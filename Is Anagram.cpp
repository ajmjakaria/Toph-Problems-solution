/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 05.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;
    cin >> s >> s1;
    sort(s.begin(), s.end());
    sort(s1.begin(), s1.end());
    cout << ((s == s1)?"Yes":"No") << endl;
    return 0;
}
