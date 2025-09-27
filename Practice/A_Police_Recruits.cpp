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
        int n;
        cin >> n;
        vector<int> e;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            e.push_back(k);
        }

        // current available officers/resources
        int val = 0;
        // unhandled requests
        int c = 0;

        for (int i = 0; i < n; i++)
        {
            if (e[i] > 0)
            {
                // recruit or increase capacity
                val += e[i];
            }
            else if (e[i] == -1)
            {
                if (val > 0)
                {
                    // handle request
                    val--;
                }
                else
                {
                    // couldn't handle
                    c++;
                }
            }
        }

        cout << c << "\n";
        solve();
    }

    return 0;
}