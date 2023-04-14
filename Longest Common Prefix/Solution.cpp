class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ans=0;
        auto temp = strs[0];
        for(int i =0 ; i < temp.size() ;i ++){
            int count = 0;
            for(auto & ele : strs){
                    if(temp[i] == ele[i])
                        count++;
                }
            
            if(count == strs.size())
                ans++;
            else
                break;    

        }

        return strs[0].substr(0, ans);
    }
};
