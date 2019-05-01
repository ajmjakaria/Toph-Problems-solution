/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 07.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while(t--){
    cin >> s;
    if(s[0]>=97) s[0] -= 32;
    printf("Welcome ");
    cout << s << endl;
    }
    return 0;
}
