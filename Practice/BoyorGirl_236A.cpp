#include <bits/stdc++.h>

using namespace std;

int main()
{
    string userName;
    getline(cin, userName);
    set<char> charSet;

    int count = 0;

    for (int i = 0; i < userName.length(); i++)
    {
        if (!charSet.count(userName[i]))
        {
            charSet.insert(userName[i]);
            count++;
        }
    }

    int len = charSet.size();

    if (len % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}