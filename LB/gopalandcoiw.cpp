#include <iostream>
#include <vector>

using namespace std;

int max_fooder(const vector<int>& arr) {
  // Create a table to store the maximum amount of fooder that can be fed
  // from a subsequence of the array, ending at the current index.
  vector<vector<int>> table(arr.size(), vector<int>(arr.size()));

  // Initialize the table.
  for (int i = 0; i < arr.size(); ++i) {
    table[i][i] = arr[i];
  }

  // Fill in the table.
  for (int i = 0; i < arr.size() - 1; ++i) {
    for (int j = i + 1; j < arr.size(); ++j) {
      if (i % 2 == 0) {
        table[i][j] = max(table[i][j - 1] + arr[j], table[i + 1][j]);
      } else {
        table[i][j] = max(table[i][j - 1] - arr[j], table[i + 1][j]);
      }
    }
  }

  // Return the maximum amount of fooder that can be fed.
  return table[0][arr.size() - 1];
}

int main() {
  // Input the array of numbers.
  vector<int> arr;
  arr.push_back(5);
  arr.push_back(3);
  arr.push_back(2);
  arr.push_back(1);
  arr.push_back(4);
  arr.push_back(6);


  // Find the maximum amount of fooder that can be fed.
  int max_fooder1 = max_fooder(arr);

  // Print the maximum amount of fooder.
  cout << max_fooder1 << endl;

  return 0;
}
