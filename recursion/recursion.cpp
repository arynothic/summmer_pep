
#include <iostream>
using namespace std;

int rec(int i, int n) {
    if (i > n) {
        return 1;
    }
    return i * rec(i + 1, n);
}

int main() {
    int pro = rec(1, 5);
    cout << pro;
    return 0;
}
