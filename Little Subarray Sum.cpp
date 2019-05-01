/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, arr[105];
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = a; i <= b; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}
