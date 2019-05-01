/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.03.2019
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, t;
    cin >> t;
    while(t--){
    cin >> a >> b >> c;
    cout << ((a+b>=c && b+c>=a && c+a>=b)?"Yes": "No") << endl;}
    return 0;
}

