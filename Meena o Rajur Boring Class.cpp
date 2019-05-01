/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 26.03.2019
*/

#include<bits/stdc++.h>
using namespace std;
double fib[40];
void fibo()
{
    fib[0]=0.0, fib[1]=1.0;
    for(int i = 2; i <= 40; i++)
    {
        fib[i] = fib [i-1] + fib[i-2];
    }
}
int main ()
{
    int t, n;
    fibo();
    cin >> t;
    while(t--)
    {
        double area = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            area += (fib[i]*fib[i]) - ((3.141593*fib[i]*fib[i])/4.0);
        }
        printf("%.2lf\n", area);
    }
    return 0;
}
