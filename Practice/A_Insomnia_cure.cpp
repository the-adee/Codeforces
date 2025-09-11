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
void solve(int k, int l, int m, int n, int d)
{
    vector<bool> isDamaged(d + 1, false);

    for (int i = 1; i <= d; ++i)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            isDamaged[i] = true;
        }
    }

    int count = 0;
    for (int i = 1; i <= d; ++i)
    {
        if (isDamaged[i])
            count++;
    }

    cout << count << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    // cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int k, l, m, n, d;

        cin >> k;
        cin >> l;
        cin >> m;
        cin >> n;
        cin >> d;

        solve(k, l, m, n, d);
    }

    return 0;
}