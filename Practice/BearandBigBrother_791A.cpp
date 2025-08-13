#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, b;
    cin >> l;
    cin >> b;

    int count = 0;

    while (true)
    {
        if (l > b)
            break;
        l = l * 3;
        b = b * 2;
        count++;
    }

    cout << count << endl;

    return 0;
}