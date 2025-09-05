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
        vector<int> vec;

        for (int i = 0; i < 4; i++)
        {
            int s;
            cin >> s;
            vec.push_back(s);
        }

        sort(vec.begin(), vec.end());

        int count = 0;

        for (int i = 0; i < vec.size() - 1; i++)
        {
            if (vec[i] == vec[i + 1])
            {
                count++;
            }
        }

        cout << count << "\n";
        solve();
    }

    return 0;
}