#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> arr, int t) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == t) {
            return 1; 
        }
        else if (arr[mid] < t) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return 0;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int t = 2;
    int ans = binary_search(arr, t);
    cout << ans;
    return 0;
}
