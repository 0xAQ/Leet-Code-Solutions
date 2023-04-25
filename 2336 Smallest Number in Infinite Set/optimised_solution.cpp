class SmallestInfiniteSet {
public:
    set <int> nums;  
    int n; 
    SmallestInfiniteSet() {
        nums.clear();
        n = 1 ;
    }
    
    int popSmallest() {
        if(nums.empty() || *nums.begin() > n) 
            return n++;
        int ans = *nums.begin();
        nums.erase(nums.begin());
        return ans;
            
    }
    void addBack(int num) {
        if(num < n)
            nums.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
