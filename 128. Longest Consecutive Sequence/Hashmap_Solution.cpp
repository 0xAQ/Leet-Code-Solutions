class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> hash;
        int max = 0;
        int n = nums.size();

        for(int i =0 ; i < n; i++ )
            hash[nums[i]]++;   
        
        for(auto ele:hash){
            if(hash.find(ele.first - 1) == hash.end()){
                cout << ele.first << "\t";
                int i = 1;
                while(hash.find(ele.first+i) != hash.end()){
                    i++;
                } 
                if(i > max) max = i;
            }
        }
        return max;
    }
};
