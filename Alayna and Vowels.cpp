/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 07.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v = 0;
    char s[1005];
    cin >> s;
    char *str = s;
    while(*str){
        if(strspn(str, "aeiouAEIOU"))
			v++;
		str++;
	}
    cout << v << endl;
    return 0;
}
