// A. Good Contest
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int arr[3];
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }
        int count = min({arr[0], arr[1], arr[2]});
        cout <<  n - count << endl;
    }
}

// B. Three Piles
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        cout << max(abs(a - b), abs(a - b + c)) << endl;
    }

    return 0;
}