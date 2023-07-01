class Solution {
public:
    string minWindow(string s, string t) {
        string ans = "";
        int n = s.size();
        int m = t.size();
        if (m > n) return ans;

        unordered_map<char, int> A;
        unordered_map<char, int> B;

        for (int i = 0; i < m; i++)
            B[t[i]]++;
        
        int minl =0, minr =-1;
        int minlength = INT_MAX;
        int l = 0;
        int have=0;
        int need = B.size();
        
        for( int r  = 0; r < n; r++){
            A[s[r]]++;
            if(A[s[r]]  == B[s[r]]) have++;
            while(have == need){
                if(r-l+1 < minlength){
                    minl = l;
                    minr = r;
                    minlength = r-l+1;
                }
                A[s[l]]--;
                if(A[s[l]]  < B[s[l]]) have--;
                l++;
            }
 
        }
        for(minl ; minl < minr+1; minl++)
                ans.push_back(s[minl]);

        return ans;
    }
};
