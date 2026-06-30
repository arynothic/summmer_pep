#include <iostream>
#include <vector>
using namespace std;
bool binary_search(vector<vector<int>> arr, int tar) {
  int m = arr.size();
  int n = arr[0].size();

  int low = 0;
  int high = m * n - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    int row = mid / n;
    int col = mid % n;

    if (arr[row][col] == tar) {
      return true;
    } else if (arr[row][col] < tar) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return false;
}

int main() {
  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int target = 9;
  bool a = binary_search(arr, target);
  cout << a;
}
