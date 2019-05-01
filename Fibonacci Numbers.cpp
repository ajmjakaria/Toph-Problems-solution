/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 05.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int fib[55];
    fib[1] = 1;
    fib[2] = 1;
    for(int i = 3; i <= 55; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    cin >> n;
    cout << fib[n] << endl;
    return 0;
}
