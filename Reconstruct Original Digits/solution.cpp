class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char, int> umap;

        for (auto &ch : s) {
            umap[ch]++;
        }

        string ans ="";

        if(umap['z'] >=1){
            while(umap['z']>0){
                ans.append("0");
                umap['z']--;
                umap['e']--;
                umap['r']--;
                umap['o']--;
            }
        }

        if(umap['w'] >= 1){
            while(umap['w']>0){
                ans.append("2");
                umap['t']--;
                umap['w']--;
                umap['o']--;
            }
        }

        if(umap['u']>=1){
            while(umap['u']>0){
                ans.append("4");
                umap['f']--;
                umap['o']--;
                umap['u']--;
                umap['r']--;
            }
        }

        if(umap['x']>=1){
            while(umap['x']>0){
                ans.append("6");
                umap['s']--;
                umap['i']--;
                umap['x']--;
            }
        }

        if(umap['g']>=1){
            while(umap['g']>0){
                ans.append("8");
                umap['e']--;
                umap['i']--;
                umap['g']--;
                umap['h']--;
                umap['t']--;
            }
        }
        
        if(umap['o']>=1){
            while(umap['o']>0){
                ans.append("1");
                umap['o']--;
                umap['n']--;
                umap['e']--;
            }
        }

        if(umap['h'] >= 1 ){
            while(umap['h'] > 0){
                ans.append("3");
                umap['t']--;
                umap['h']--;
                umap['r']--;
                umap['e']--;
                umap['e']--;
            }
        }

        if(umap['f'] >= 1){
            while(umap['f'] > 0){
                ans.append("5");
                umap['f']--;
                umap['i']--;
                umap['v']--;
                umap['e']--;
            }
        }

        if(umap['s'] >= 1){
            while(umap['s'] > 0){
                ans.append("7");
                umap['s']--;
                umap['e']--;
                umap['v']--;
                umap['e']--;
                umap['n']--;
            }
        }

        if(umap['i'] >= 1){
            while(umap['i'] > 0){
                ans.append("9");
                umap['n']--;
                umap['i']--;
                umap['n']--;
                umap['e']--;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }

};
