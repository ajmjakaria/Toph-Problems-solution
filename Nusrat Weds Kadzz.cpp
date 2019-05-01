/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 31.03.2019
*/
///Tried but not solved
/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[30];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n+1);
    int cnt = 0;
    int flag = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] != a[i-1]){
            cnt++;
            flag = a[i];
            cout << "ok\n";
        }
    }
    if(cnt == 1) cout << flag << endl << "Nusrat weds Kadzz!" << endl;
    else cout << "Sorry Kadzz!\n";
    return 0;
}

*/

/*
// C++ program to demonstrate the use of std::unique
// C++ program to demonstrate the use of std::unique
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v, i;

    vector<int>::iterator ip;

    // Using std::unique
    ip = std::unique(v.begin(), v.begin() + 12);
    // Now v becomes {1 3 10 1 3 7 8 * * * * *}
    // * means undefined

    // Resizing the vector so as to remove the undefined terms
    v.resize(std::distance(v.begin(), ip));

    // Displaying the vector after applying std::unique
    for (ip = v.begin(); ip != v.end(); ++ip) {
        cout << *ip << " ";
    }

    return 0;
}*/
