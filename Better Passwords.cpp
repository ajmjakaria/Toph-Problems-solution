/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.03.2019
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s[0] = s[0] - 32;
    int len = s.size();
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 's') cout << "$";
        else if(s[i] == 'i') cout << "!";
        else if(s[i] == 'o') cout << "()";
        else cout << s[i];
    }
    cout << "." << endl;
    return 0;
}

