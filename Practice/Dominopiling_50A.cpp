#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> matrix(5, vector<int>(5));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(matrix[i][j] == 1){
                int result = ((max(i, 2) - min(i, 2)) + (max(j, 2) - min(j, 2)));
                cout << result << endl;;
                break;
            }
        }
    }
    return 0;
}