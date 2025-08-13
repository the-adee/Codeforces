#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k;
    cin >> n;
    cin >> w;

    int costOfAllBananas = 0;
    for(int i=0; i<w; i++){
        costOfAllBananas += (k * (i+1));
    }
    if(costOfAllBananas > n){
        cout << costOfAllBananas - n << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}