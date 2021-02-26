#include <iostream>
using namespace std;

int main() {
    int n, k = 1;
    cin >> n;
    while (n != 0) {
        for (int i = 1; i < k; i++) {
            cout << ' ';
        }
        for (int i = n; i >= 1; i--) {
            cout << '*';
        }
        cout << endl;
        k += 1;
        n -= 1;
    }
    return 0;
}
