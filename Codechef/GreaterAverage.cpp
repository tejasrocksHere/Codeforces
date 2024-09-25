#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        float avg=(float)(a+b)/2.0;
        if(avg>c)
        cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    }
    return 0;
}