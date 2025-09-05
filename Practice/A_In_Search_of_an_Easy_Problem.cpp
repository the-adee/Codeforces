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
void solve(int n, int t, string &q)
{
    int i = 0;
    int j = 1;

    while (j < n - 1)
    {
        if (q[i] == 'B' && q[j] == 'G')
        {
            swap(q[i], q[j]);
        }
        i++;
        j++;
    }
}

int main()
{
    FAST_IO;

    int T = 1;
    // cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n, t;
        cin >> n >> t;

        cin.ignore();
        string q;
        getline(cin, q);

        solve(n, t, q);
        cout << q << "\n";
    }

    return 0;
}
