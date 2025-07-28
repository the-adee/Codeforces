#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int testCases;
   cin >> testCases;
   
   while (testCases--) {
       int size;
       cin >> size;
       
       vector<int> arr(size + 2), rightBound(size + 2);
       for (int idx = 1; idx <= size; idx++) {
           cin >> arr[idx];
       }
       
       stack<int> indices;
       for (int current = 1; current <= size; current++) {
           while (!indices.empty() && arr[indices.top()] < arr[current]) {
               rightBound[indices.top()] = current;
               indices.pop();
           }
           indices.push(current);
       }
       
       while (!indices.empty()) {
           rightBound[indices.top()] = size + 1;
           indices.pop();
       }
       
       long long totalSum = 0;
       for (int pos = 1; pos <= size; pos++) {
           totalSum += (long long) pos * (rightBound[pos] - pos);
       }
       
       cout << totalSum << "\n";
   }
   
   return 0;
}