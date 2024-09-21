#include <iostream>
using namespace std;

int main() {
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
    int n;
    cin>>n;
    if(n==1){
        int val=abs(i-3)+abs(j-3);
        cout<<val;
        break;
    }
        }
    }



    return 0;
}