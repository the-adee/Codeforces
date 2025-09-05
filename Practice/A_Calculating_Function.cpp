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
ll solve(ll n)
{
    // formula based
    // if n is even: f(n) = n / 2
    // if n is odd: f(n) = - (n + 1) / 2

    if (n % 2 == 0)
        return n / 2;
    else
        return -((n + 1) / 2);

    // my way of doing this
    // int flag = 1;
    // ll answer = 0;
    // for (ll i = 1; i <= n; i++)
    // {
    //     if (flag == 1)
    //     {
    //         answer = answer + (-i);
    //         flag = 0;
    //     }
    //     else
    //     {
    //         answer = answer + i;
    //         flag = 1;
    //     }
    // }
    // return answer;
}

int main()
{
    FAST_IO;

    int T = 1;
    // cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        ll n;
        cin >> n;
        ll result = solve(n);

        cout << result << "\n";
    }

    return 0;
}