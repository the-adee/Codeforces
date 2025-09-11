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
void solve(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            // even row: full of '#'
            for (int j = 0; j < m; j++)
                cout << "#";
        }
        else if ((i / 2) % 2 == 0)
        {
            // odd row, even group
            // '#' at the end
            for (int j = 0; j < m - 1; j++)
                cout << ".";
            cout << "#";
        }
        else
        {
            // odd row, odd group
            // '#' at the beginning
            cout << "#";
            for (int j = 1; j < m; j++)
                cout << ".";
        }
        cout << '\n';
    }
}


int main()
{
    FAST_IO;

    int T = 1;
    // cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n, m;
        cin >> n >> m;
        solve(n, m);
    }

    return 0;
}