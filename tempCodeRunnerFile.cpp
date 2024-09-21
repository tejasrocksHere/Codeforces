#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    string n=to_string(num);

for(int i=0;i<n.size();i++){
    int val=n[i]-'0';
    if(val>4){
        val=9-val;
        char ch=val+'0';
n[i]=ch;
    }
}
cout<<n;

    return 0;
}