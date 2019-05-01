/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 07.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[120];
    bool u, l, d;
    while(cin >> s)
    {
        u = l = d = false;
        char *p = s;
        int cnt = 0;
        while(*p)
        {
            if(isupper(*p))
                u = true;
            else if(islower(*p))
                l = true;
            else if(isdigit(*p))
                d = true;

            if(u && l && d)
            {
                cnt++;
                u = l = d = false;
            }
            p++;
        }
        cout << cnt <<  endl;
    }
    return 0;
}
