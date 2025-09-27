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
void solve(vector<int> &a, int n, int m)
{
    int count = 0;

    bool consec = true;
    for (int i = 1; i < m; i++)
    {
        if (a[i] != a[0] + i)
        {
            consec = false;
            break;
        }
    }

    if (consec)
    {
        int sVal = a[0];
        int eVal = sVal + m - 1;

        for (int seqLen = eVal; seqLen <= n; seqLen++)
        {
            count++;
        }
    }

    for (int i = 1; i < m; i++)
    {
        if (a[i] == 1 && a[i - 1] > 1)
        {
            bool valid = true;
            int seqEnd = a[i - 1];
            for (int j = 0; j < i; j++)
            {
                if (a[j] != seqEnd - (i - 1 - j))
                {
                    valid = false;
                    break;
                }
            }

            if (valid)
            {
                for (int j = i; j < m; j++)
                {
                    if (a[j] != j - i + 1)
                    {
                        valid = false;
                        break;
                    }
                }
            }

            if (valid && seqEnd < n)
            {
                count++;
            }
        }
    }
    if (count == 0)
    {
        cout << (count + 1) << "\n";
    }
    else
    {
        cout << count << "\n";
    }
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        solve(a, n, m);
    }

    return 0;
}