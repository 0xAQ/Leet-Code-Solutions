class SmallestInfiniteSet {
public:
    set <int> nums;    
    SmallestInfiniteSet() {
        for(int i =1 ; i <= 1000; i ++)
            nums.insert(i);
    }
    
    int popSmallest() {
        
        set<int>::iterator itr;
        int small = *nums.begin();
            for (itr = nums.begin(); itr != nums.end(); itr++) 
                if(*itr < small)
                    small = *itr;
            nums.erase(small);
            return small;
            
    }
    void addBack(int num) {
        if(!nums.count(num))
            nums.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
