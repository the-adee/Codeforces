#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    while (n != 0)
    {
        int digit = n % 10;
        cout << "Current digit is: " << digit << endl;

        if (digit == 4 || digit == 7)
        {
            count++;
        }
        n /= 10;
    }
    cout << count << endl;

    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}