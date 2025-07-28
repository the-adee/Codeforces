#include <iostream>
#include <string>
using namespace std;

int main()
{

    int t;
    cin >> t;
    cin.ignore();

    int x = 0;

    while (t--)
    {

        string statement;

        getline(cin, statement);

        if (statement[0] == '+')
        {
            ++x;
        }
        else if (statement[0] == '-')
        {
            --x;
        }
        else
        {
            if (statement[1] == '+')
            {
                x++;
            }
            else
            {
                x--;
            }
        }
    }

    cout << x << endl;

    return 0;
}