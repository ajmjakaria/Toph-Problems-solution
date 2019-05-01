#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c; float s = 0;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        s = (a+b+c)/2;
        double tmp = (s * (s-a) * (s-b) * (s-c));
        cout << ((a < 0)?"Oh, No!":sqrt(tmp)) << endl;
    }
    return 0;
}
