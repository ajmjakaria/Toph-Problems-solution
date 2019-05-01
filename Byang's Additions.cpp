/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, s = 0;
    bool flag = false;
    cin >> a >> b;
    while(a!=0 || b!=0)
    {
        s = a%10 + b%10;
        a /= 10;
        b /= 10;
        if(s > 9){
            flag = true;
            break;
        }
    }
    cout << ((flag) ? "Yes" : "No") << endl;
    return 0;
}
