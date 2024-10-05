class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    vector<int> mp(26,0);
    vector<int> mp1(26,0);

    // int mp1[26]={0};
for(auto it: s1){
    mp[it-'a']++;
}
int i=0;
int j=0;
int k=s1.length();
while(j<s2.length()){
    mp1[s2[j]-'a']++;

if(j-i+1==k){
    //
    if(mp1==mp)
    return true;
    mp1[s2[i]-'a']--;
    i++;
}
    j++;
}
return false;
    }
};