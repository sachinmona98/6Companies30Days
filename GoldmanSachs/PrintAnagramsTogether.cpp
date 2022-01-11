 vector<vector<string> > Anagrams(vector<string>& string_list) {
       
        
        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < string_list.size(); i++)
        {
            string key = string_list[i];
            sort(key.begin(), key.end());
            mp[key].push_back(string_list[i]);
            
        }
        vector<vector<string>> ans;
        for(auto i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;
        
    }
