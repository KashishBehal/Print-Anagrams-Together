class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
    vector<vector<string>>v;
    map<string , vector<string>>mp;
    for(auto i:string_list){
        string a=i;
        sort(a.begin() , a.end());
        mp[a].push_back(i);
    }
    for(auto it:mp){
        v.push_back(it.second);
    }
        return v;
    }
};
