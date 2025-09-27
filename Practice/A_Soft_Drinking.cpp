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
        // n -> no. of friends
        // k -> bottles
        // l -> bottle has 'l' ml of drink
        // c -> limes
        // d - slices of limes
        // p -> gms of salt
        // nl -> ml of drink/friend
        // np -> gm(s) of salt/friend

        int n, k, l, c, d, p, nl, np;

        cin >> n >> k >> l >> c >> d >> p >> nl >> np;

        int drink_toasts = (k * l) / nl;
        int lime_toasts = c * d;
        int salt_toasts = p / np;

        int total_toasts = min({drink_toasts, lime_toasts, salt_toasts});
        int result = total_toasts / n;

        cout << result << "\n";

        solve();
    }

    return 0;
}