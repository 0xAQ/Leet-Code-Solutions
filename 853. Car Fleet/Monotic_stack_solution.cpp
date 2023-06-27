class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> car;
        for(int i = 0; i < speed.size(); i++){
            car.push_back({position[i], speed[i]});
        }

        sort(car.rbegin(),car.rend());
        
        stack<float> stack;
        for(int i = 0; i<car.size(); i++ ){
            float time = float(target - car[i].first)/ float(car[i].second);
            if(stack.empty() || time > stack.top())
                stack.push(time); 
        }
        return stack.size();
    }
};
