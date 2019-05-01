/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 10.03.2019
*/

#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    double a, b, c, d, e;
    while(cin >> a >> b >> c >> d >> e){
    double area = a*a - ((pi*b*b/4.0) + (pi*c*c/4.0) + (pi*d*d/4.0) + (pi*e*e/4.0));
    cout << setprecision(3) << fixed << area << endl;
    }
    return 0;
}
