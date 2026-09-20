#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum % 4 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


