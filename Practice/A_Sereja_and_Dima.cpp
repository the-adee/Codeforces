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

        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            vec[i] = num;
        }

        int start = 0;
        int end = n - 1;
        int s, d;
        s = d = 0;
        bool turn = true;
        while (start <= end)
        {
            // Sereja turn
            if (turn)
            {

                if (vec[start] > vec[end])
                {
                    s += vec[start++];
                }
                else
                {
                    s += vec[end--];
                }
                // turn switch for next round
                turn = false;
            }
            else
            {
                if (vec[start] > vec[end])
                {
                    d += vec[start++];
                }
                else
                {
                    d += vec[end--];
                }
                // switch turn for next round
                turn = true;
            }
        }
        solve();

        cout << s << " " << d << "\n";
    }

    return 0;
}