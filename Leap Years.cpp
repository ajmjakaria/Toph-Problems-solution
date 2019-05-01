/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 07.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    //cout << ((y % 4 == 0 && y % 400 != 0) ? "Yes" : "No") <<endl;
    if (y % 4 == 0)
    {
        if (y%100 == 0)
        {
            if (y % 400 == 0)
                cout << "Yes\n";
            else
                cout  << "No\n";
        }
        else
            cout << "Yes\n";
    }
    else
        cout<< "No\n";
    return 0;
}
