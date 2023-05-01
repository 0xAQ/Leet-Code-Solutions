class Solution {
public:
    double average(vector<int>& salary) {
        int max = 0, min = INT_MAX;
        int sum = 0 ;

        for(int i=0; i < salary.size(); i++){
            if(salary[i] > max) max = salary[i];
            if(salary[i] < min) min = salary[i];
            sum += salary[i];
        }

        sum = sum - max - min;
        double avg = sum/double((salary.size()-2));

        return avg;
    }
};
