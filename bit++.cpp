#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int val=0;
    while(t--){
        string str;
        cin>>str;
        if(str.substr(0,2)=="++" or str.substr(1,2)=="++")
        val++;
    else if(str.substr(0,2)=="--" or str.substr(1,2)=="--"){
        val--;
    }

   
    }
    cout<<val;
    return 0;
}