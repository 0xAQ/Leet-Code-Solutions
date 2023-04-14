// Runtime = 121 ms | Beats 5.7%
//Memory = 24.3 MB | Beats 23.57%

class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> circle;
        for(int i =1; i<=n; i++){
            circle.emplace(i);
        }

        while(circle.size() > 1){
            for(int i =1; i<k; i++){
                int temp = circle.front();
                circle.pop();
                circle.emplace(temp);
            }
            circle.pop();
        }

        return circle.front();
    }
};
