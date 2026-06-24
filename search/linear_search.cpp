#include <iostream>
using namespace std;

int linear_s(int arr[], int n, int t) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == t) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[5] = {1, 2, 4, 5, 6};

    int n = 5;
    int target = 4;

    int ans = linear_s(arr, n, target);
    cout << ans;

    return 0;
}
