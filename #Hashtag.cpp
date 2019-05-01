/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 03.03.2019
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ') cout << s[i];

    }
    cout << endl;
    return 0;
}
