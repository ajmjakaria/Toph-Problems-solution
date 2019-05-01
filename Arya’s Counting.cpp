/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 09.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> a >> b >> c;
        int mx = max(a, max(b, c));
        //cout << mx << endl;
        if((a == mx && a == b) || (b == c && b == mx) || (a == c && c == mx)) printf("Case %d: Confused\n", i);
        else{
            printf("Case %d: ", i);
            cout << ((a == mx)?"A":((b==mx)?"B":"C")) << endl;
        }
    }
    return 0;
}
