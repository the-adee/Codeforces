#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

    string firstString, secondString;

    cin >> firstString >> secondString;

    // convert both strings to lowercase to ignore case sensitivity
    transform(firstString.begin(), firstString.end(), firstString.begin(), ::tolower);
    transform(secondString.begin(), secondString.end(), secondString.begin(), ::tolower);

    // compare the strings lexicographically
    if (firstString < secondString) {
        cout << "-1" << endl;
    } else if (firstString > secondString) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}