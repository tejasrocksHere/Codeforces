class Solution {
public:
    int f(string s, int i, unordered_map<string, int>& mp) {
        if (i >= s.size()) 
            return 0;

        int maxi = 0;
        //we create all possible substring
        //abcabc->a,bcabc ,, ab,cbc ,, abca,bc...
        for (int k = i; k < s.size(); ++k) {
            string str = s.substr(i, k - i + 1); // substring from i to k
            if (mp.find(str) == mp.end()) {
                //we check if we already got the substtring then if not then ingore
                mp[str] = 1;
                maxi = max(f(s, k + 1, mp) + 1, maxi); 
                mp.erase(str); 

            }
        }
        return maxi;
    }

    int maxUniqueSplit(string s) {
        unordered_map<string, int> mp;

        //greedy sol fails so we have to try all possible eays
        return f(s, 0, mp);
    }
};
