class TimeMap {
public:
    unordered_map<string, vector<pair<string,int>>> timemap;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        timemap[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        if(timemap[key].size() == 0) return "";
        int l =0 , r = timemap[key].size()-1;
        int m =0;
        while(l <= r){
            m = l +(r - l)/2;
            if(timemap[key][m].second == timestamp)
                return timemap[key][m].first;
            else if(timemap[key][m].second < timestamp){
                if(m != timemap[key].size()-1 && timemap[key][m+1].second <= timestamp)
                    l = m+1;
                else
                    return timemap[key][m].first;
            }
            else{
                    r = m-1;
            }
        }
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
