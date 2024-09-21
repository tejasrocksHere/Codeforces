// n friends
// k bottles  with l ml
// c limes with d number of slices
// p grams of salt
// n*l drinl requirwd with one slice and n*p grams of salt
#include <iostream>
using namespace std;

int main() {
     int n,  k,  l,  c, d,  p,  nl,  np;
     cin>> n >> k>> l >> c>> d>> p>> nl>> np;
    int total_softdrink=k*l;
    int total_lime=c*d;
    int totol_salt=p*np;
    int enough_pegs=total_softdrink/nl;
    // cout<<total_softdrink<<" "<<total_lime<<" "<<totol_salt<<endl;
    int ans=min(total_lime,min(totol_salt,enough_pegs));
    cout<<ans/n;
    return 0;
}