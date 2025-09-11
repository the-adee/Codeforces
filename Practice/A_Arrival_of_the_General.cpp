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
void solve(int a[], int size)
{
    // find the index of the leftmost max element
    int maxEle = INT_MIN;
    int idxMax = -1;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > maxEle)
        {
            maxEle = a[i];
            idxMax = i;
        }
    }

    // find the index of the rightmost min element
    int minEle = INT_MAX;
    int idxMin = -1;
    for (int i = 0; i < size; i++)
    {
        if (a[i] <= minEle)
        {
            minEle = a[i];
            idxMin = i;
        }
    }

    // to calculate swaps
    // move(s) to bring max to front + moves to bring min to end
    int swaps = idxMax + (size - 1 - idxMin);

    // if max is before min, min shifts right by 1 after max moves,
    // so subtract one swap because one swap overlaps
    if (idxMax > idxMin)
        swaps--;

    cout << swaps << "\n";
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

        int a[n];

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            a[i] = num;
        }
        solve(a, n);
    }

    return 0;
}