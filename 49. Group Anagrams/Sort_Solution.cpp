class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;
        vector<vector<string>> ans;
        string temp="";
      
        for(auto ele : strs){
         temp=ele;
         sort(temp.begin(),temp.end());
           hash[temp].push_back(ele);
        }
      
        for(auto ele : hash){
            ans.push_back(ele.second);
        }
      
        return ans;
    }
};
