//using HashMap
bool isAnagram(string s,string t){
	unordered_map<char,int> mp;
        //increment freq for s
        for(auto i: s){
            mp[i]++;
        } 
        //decrement freq for t
        for(auto i: t){
            mp[i]--;
        } 

        for(auto c: mp){
            if(c.second != 0) return false;
        }
        return true;

        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;
}