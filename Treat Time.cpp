/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 31.03.2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if((a >= b && b >= c) || (a < b && a < c))
        cout << "Chocolate\n";
    else{
        if(a < b && a >= c) cout << "Ice-cream\n";
        else
            cout << "Chocolate\n";
    }
    return 0;
}
