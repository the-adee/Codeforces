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
void solve(const string &s)
{
    // to track if each letter from 'a' to 'z' has appeared
    bool seen[26] = {false};
    // number of unique letters found
    int count = 0;

    for (char ch : s)
    {
        // ignored non-alphabet characters
        if (isalpha(ch))
        {
            // normalize to lowercase
            ch = tolower(ch);
            // char mapping 'a'..'z' to 0..25
            int idx = ch - 'a';

            // if this letter is new
            if (!seen[idx])
            {
                // mark as seen
                seen[idx] = true;
                // increment the unique count
                count++;

                // break all letters found
                if (count == 26)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }

    cout << "NO\n";
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

        cin.ignore();

        string s;
        getline(cin, s);

        solve(s);
    }

    return 0;
}