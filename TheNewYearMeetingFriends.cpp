#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[3];
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];

    sort(arr,arr+3);
    
  
    int ans=arr[2]-arr[0];
    cout<<ans;
    return 0;
}