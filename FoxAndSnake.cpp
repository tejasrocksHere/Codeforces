#include <iostream>
using namespace std;
// (1,1)->(1,m)->(3,m)->(3,1)
int main() {
    int n,m;
    cin>>n>>m;
   vector<vector<int>> v(n,vector<char>(m,'.'));
   int row=0;
   while(row<n){
  for(int i=0;i<m;i++){
    v[0][i]='#';
  }
  for(int i=0;i<3;i++){
    v[i][m-1]='#';
  }
    for(int i=m-1;i>=0;i--){
    v[m-1][i]='#';
  }
   }
  
    return 0;
}