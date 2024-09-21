#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    string str=to_string(n);
    int c=0;
    for(int i=str.size()-1;i>=0;i--){
if(str[i]!='0')
c++;
    }
    cout<<c<<endl;
       for(int i=str.size()-1;i>=0;i--){
if(str[i]!='0'){
    
    int val=str[i]-'0';
    val*=pow(10,str.size()-i-1);
cout<<val<<" ";
}

    }
    cout<<endl;

 }

    return 0;
}