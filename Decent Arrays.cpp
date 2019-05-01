/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 05.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[105];
    int n; bool flag = false;
    cin >> n >> arr[0];
    for(int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] < arr[i-1]) flag = true;
    }
    cout << ((flag == true) ? "No" : "Yes") << endl;
    return 0;
}
