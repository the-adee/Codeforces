#include <bits/stdc++.h>
using namespace std;

// fast I/O
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

// aliases
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) ((int)(x).size())

// constants
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18;

// debug (uncomment to use)
// #define debug(x) cerr << #x << " = " << x << endl

// solve function for each test case
string solve(vector<int> vec, int n)
{
    int c0, c5;
    c0 = c5 = 0;
    for (int val : vec)
    {
        if (val == 5)
        {
            c5++;
        }
        else
        {
            c0++;
        }
    }

    if (c0 == 0)
    {
        return "-1";
    }

    string result = "";
    if (c5 >= 9)
    {
        if (c5 % 9 == 0)
        {
            // case where needed no of 5's are there
            result = string(c5, '5') + string(c0, '0');
        }
        else
        {
            // case where needed no of 5's might exceed
            int diff = c5 % 9;
            c5 -= diff;
            // cout << c5 << endl;
            result = string(c5, '5') + string(c0, '0');
            // cout << "Result here: " << result << endl;
        }
    }
    else
    {
        return "0";
    }
    return result;
}

int main()
{
    FAST_IO;

    int T = 1;
    // cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            vec[i] = num;
        }
        string result = solve(vec, n);
        cout << result << "\n";
    }

    return 0;
}