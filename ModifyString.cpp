#include <iostream>
using namespace std;
class Solution{
    public:
    string modifyString(string str){
        string newStr = str;
        newStr[0] = 'H';
        return newStr;
    }
};
int main(){
    Solution obj;
    string original = "hello";
    string modified = obj.modifyString(original);
    cout << "Original: " << original << endl;
    cout << "Modified: " << modified << endl;
    return 0;
}