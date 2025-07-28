#include <iostream>
using namespace std;

int main()
{

    // brute-force approach
    int p;
    cin >> p;

    int totalCount = 0;
    while (p-- > 0)
    {
        int count = 0;

        int i = 0;
        while (i++ < 3)
        {
            int num;
            cin >> num;
            if (num == 1)
            {
                count++;
            }
        }

        if (count >= 2)
        {
            totalCount++;
        }
    }

    cout << totalCount << endl;


    // more clean and better approach
    // int p, totalCount = 0;
    // cin >> p;

    // while (p--) {
    //     int a, b, c;
    //     cin >> a >> b >> c;
    //     if (a + b + c >= 2)
    //         totalCount++;
    // }

    // cout << totalCount << endl;

    return 0;
}