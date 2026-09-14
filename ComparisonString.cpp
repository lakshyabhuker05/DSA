#include <iostream>
using namespace std;
class Solution{
    public:
    bool Comparison(string str1,string str2){
        return str1 == str2;
    }
};
int main(){
    Solution obj;

    string str1 = "Hello";
    string str2 = "Hello";

    if(obj.Comparison(str1,str2)){
        cout<< "equal"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }
}