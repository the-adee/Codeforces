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
void solve()
{
    // yo start from here,
    // don't worry, you gonna solve this one too
}

int main()
{
    FAST_IO;

    int T = 1;
    // cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        // no of lvls
        int n, p, q;
        cin >> n;

        vector<int> levels(n, 0);
        cin >> p;
        for (int i = 0; i < p; i++)
        {
            int p_ith;
            cin >> p_ith;

            levels[p_ith - 1]++;
        }

        cin >> q;

        for (int i = 0; i < q; i++)
        {
            int q_ith;
            cin >> q_ith;
            levels[q_ith - 1]++;
        }

        for (int val : levels)
        {
            if (val == 0)
            {
                cout << "Oh, my keyboard!" << "\n";
                return 0;
            }
        }
        cout << "I become the guy." << "\n";
        // solve();
    }

    return 0;
}