#include <iostream>
using namespace std;

class Solution {
    public:
    int findlength(string s){
        return s.length();
    }
};

int main(){
    Solution obj;
    string s = "Hello World";
    cout << obj.findlength(s) << endl;
    return 0;
}