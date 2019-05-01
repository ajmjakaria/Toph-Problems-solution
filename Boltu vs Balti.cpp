#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, sum = 0;
    while(scanf("%lld%lld",&a,&b)!=EOF){
    printf("Sum of %lld to %lld is -> %lld;\n", min(a,b), max(a,b), ((a>b)?(a+1L-b)*(a+b)/2 : (b+1L-a)*(a+b)/2));
    }
    return 0;
}
