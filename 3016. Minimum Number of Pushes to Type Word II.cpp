class Solution {
public:
    int minimumPushes(string word) {
        
        unordered_map<char,int> count;
        for(auto i:word)
            count[i]++;
        vector<int> v1;
        for(auto i:count){
            v1.push_back(i.second);
        }
        sort(v1.rbegin(),v1.rend());
        int temp1=1;
        int ans=0;
        for(int i=0;i<v1.size();i++){
            if(i>=8)
                temp1=2;
            if(i>=16)
                temp1=3;
            if(i>=24)
                temp1=4;
            ans += temp1*v1[i];
        }
        return ans;
        
    }
};
