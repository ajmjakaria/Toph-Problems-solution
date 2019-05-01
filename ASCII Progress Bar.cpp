/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double p;
    cin >> p;
    int n = floor(p);
    int l = n/10;
    cout << "[";
    for(int i = 0; i < l; i++) cout << "+";
    for(int i = l; i < 10; i++) cout << ".";
    cout << "] ";
    printf("%d%%", n);
    //cout << p <<"%" << endl;
    cout << endl;
}
//[++++++....] 62%
//[++++++....] 62%
