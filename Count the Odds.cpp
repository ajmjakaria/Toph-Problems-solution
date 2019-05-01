/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c=0;
    cin >> a >> b;
    cout << ((a%2==1 || b%2==1)?((b-a)/2+1):(b-a)/2) << endl;
    return 0;
}
