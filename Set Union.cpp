/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 14.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n, m, a;
    cin >> n >> m;
    for(int i = 0; i < n+m; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n+m; i++)
    {
        if(v[i]!= v[i+1]) cout << v[i];
        if(v[i]!= v[i+1] && i != (n+m)-1)
            cout <<" ";
    }
    cout << endl;
    return 0;
}
