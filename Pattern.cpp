#include <iostream>
using namespace std;
int main() {
    int n = 1;
    for(int i = 5; i >= n ; i--){
        for(int j = 1;j <= i;j++){
            cout << "*";
        }  
        cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << i;
        }  
        cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }   
        cout << "*" << endl;
    }
    return 0;
}