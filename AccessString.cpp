#include <iostream>
using namespace std;
class Solution {
    public:
    void accessallcharacters(string s){
        for(int i = 0; i < s.length(); i++){
            cout << s[i] << endl;
        }
    }
};
int main(){
    Solution obj;
    string s = "Hello";
    obj.accessallcharacters(s);
    return 0;
}