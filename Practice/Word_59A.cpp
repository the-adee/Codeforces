#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int uppercase = 0;
    int lowercase = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch >= 65 && ch <= 90)
        {
            uppercase++;
        }
        else
        {
            lowercase++;
        }
    }

    if (uppercase > lowercase)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
    return 0;
}