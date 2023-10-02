//using hash map
bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        //increment freq for s
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        //decrement freq for t
        for(int i=0; i<t.length(); i++){
            mp[t[i]]--;
        }
        for(auto i: mp){
            if(i.second != 0) return false;
        }
        return true;
        
        // optional method
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;
}