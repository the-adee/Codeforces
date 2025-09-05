#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

// Aliases
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) ((int)(x).size())

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18;

// Debug (uncomment to use)
// #define debug(x) cerr << #x << " = " << x << endl

// Solve function for each test case
int solve(int n, int x)
{
    vector<char> grid(n);

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;

        grid[i] = c;
    }
    int pos = x;
    int count = 0;

    if (n - pos > pos - 1)
    {
        // left side
        // while (x >= 0)
        // {
        //     if (grid[x - 1] != '#')
        //     {
        //         grid[x - 1] = '#';
        //     }
        //     else
        //     {
        //         grid[x + 1] = '#';
        //     }
        //     x--;
        //     count++;
        // }
        count = pos - 1 + 1;
    }
    else
    {
        // right side
        // while (x < n)
        // {
        //     if (grid[x + 1] != '#')
        //     {
        //         grid[x + 1] = '#';
        //     }
        //     else
        //     {
        //         grid[x - 1] = '#';
        //         // x++;
        //         // count++;
        //     }
        //     x++;
        //     count++;
        // }
        count = n - pos + 1;
    }
    return count;
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // Uncomment this if multiple test cases

    while (T--)
    {
        int n, x;
        cin >> n;
        cin >> x;
        int result = solve(n, x);
        cout << "OP:" << result << endl;
        ;
    }

    return 0;
}