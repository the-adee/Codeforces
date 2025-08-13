#include <bits/stdc++.h>

using namespace std;

bool translation(string s, string translatedStr)
{
    reverse(s.begin(), s.end());
    return s == translatedStr;
}

int main()
{
    string s;
    string translatedStr;
    getline(cin, s);
    getline(cin, translatedStr);

    if (translation(s, translatedStr))
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
}