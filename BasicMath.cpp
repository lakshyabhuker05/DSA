#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;

    int count = to_string(n).length();
    cout << count << endl;

    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int reverse = 0;
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    cout << reverse << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int original = n;
    int reverse = 0;
    while (n != 0) {
        reverse =( reverse * 10 )+ (n % 10);
        n = n/10;
    }
    

    if(reverse == original){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
    return 0;
}