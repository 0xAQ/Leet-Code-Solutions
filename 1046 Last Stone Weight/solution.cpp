class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    
        
        while(stones.size() > 1){
            sort(stones.begin(), stones.end());
            if(stones[stones.size()-1] == stones[stones.size()-2]){
                stones.pop_back();
                stones.pop_back();
            }
            else{
                stones[stones.size() - 2] = stones[stones.size() - 1] - stones[stones.size() - 2];
                stones.pop_back();
            }

        }
        if(stones.size() == 0)
            return 0;
        return stones[0];
    }
};
