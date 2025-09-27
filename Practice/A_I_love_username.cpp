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
void solve(int n)
{
    vector<int> contestRating(n, 0);

    for (int i = 0; i < n; i++)
    {
        int rating;
        cin >> rating;

        contestRating[i] = rating;
    }

    int count = 0;
    int maxRating = contestRating[0];
    int minRating = contestRating[0];

    // bool flag = false;

    for (int i = 1; i < n; i++)
    {
        if (contestRating[i] > maxRating)
        {
            maxRating = contestRating[i];
            count++;
        }
        else if (contestRating[i] < minRating)
        {
            minRating = contestRating[i];
            count++;
        }
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
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            solve(n);
        }
    }

    return 0;
}