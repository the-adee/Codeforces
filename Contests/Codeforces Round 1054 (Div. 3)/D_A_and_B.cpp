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

long long minSwap(const vector<int> &pos)
{
    int m = (int)pos.size();
    if (m == 0)
        return 0;

    int med = m / 2;
    long long cost = 0;
    for (int i = 0; i < m; i++)
    {
        cost += abs(pos[i] - (pos[med] - med + i));
    }
    return cost;
}

// solve function for each test case
void solve(string s, int n)
{
    if (n <= 2)
    {
        cout << 0 << "\n";
        return;
    }

    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            a.push_back(i);
        else
            b.push_back(i);
    }

    long long costA = minSwap(a);
    long long costB = minSwap(b);

    cout << min(costA, costB) << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n;
        cin >> n;

        cin.ignore();

        string s;

        getline(cin, s);
        solve(s, n);
    }

    return 0;
}