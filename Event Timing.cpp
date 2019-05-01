/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 30.03.2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> a >> b >> c;
        //int flag = ceil((double)b/c);
        int flag = b/c + 1;
        printf("Case %d: %d\n", i, a+c*flag);

    }
    return 0;
}
