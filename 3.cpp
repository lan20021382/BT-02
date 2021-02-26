#include <iostream>
using namespace std;

int main() {
    int n, k = 1;
    cin >> n;
    while (n != 0) {
        for (int i = n-2; i >= 0; i--) {
            cout << ' ';
        }

        for (int i = k; i >= 1; i--) {
            cout << '*';
        }
        cout << endl;
        k += 2;
        n -= 1;
    }
    return 0;
}
