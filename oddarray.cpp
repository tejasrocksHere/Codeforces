#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s=0;
        while(n--){
        int a;
        cin>>a;
        s+=a;
        }
        if(s%2!=0)
        cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}