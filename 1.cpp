#include <iostream>
using namespace std;

int main() {
    int n, dem = 0;
    cin >> n;
    if (n < 2) {
        cout << "no";
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            dem += 1;
        }
    }
    if (dem == 0) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}
