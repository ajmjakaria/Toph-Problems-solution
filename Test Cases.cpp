/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 10.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cpul, meml, d, c, m;
    bool x, y, z, ok = false;
    cin >> n >> cpul >> meml;
    x = y = z = false;
    while(n--)
    {
        cin >> d >> c >> m;
        if(!ok)
        {
            if(c > cpul){
                cout << "CLE\n";
                ok = true;
                break;
            }
            else if(m > meml){
                cout << "MLE\n";
                ok = true;
                break;}
            else if(d){
                cout << "WA\n";
                ok = true;
                break;
            }
        }
    }
    if(!ok)
        cout << "AC\n";
    return 0;
}
