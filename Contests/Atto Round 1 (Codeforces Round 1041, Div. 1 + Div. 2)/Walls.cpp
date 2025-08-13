#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        // size of the grid
        int n;
        cin >> n;

        int x;
        cin >> x;

        vector<char> cells(n);
        for(int i=0; i<n; i++){
            char c;
            cin >> c;
            cells[i] = c;
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            int mid = i+1 + n;
            if(mid % 2 == 0){
                ans = mid + (i+1);
            }
        }
    }
    return 0;
}