#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    sort(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        if(isdigit(s[i])){
            cout << s[i];
            if(i < s.length() - 1){
            cout << "+";
        }
        }
    }
    return 0;
}