class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {

        unordered_map<int,int>mpp;

        for(int i=0;i<arr.size();i++)
        {
            int a=(arr[i]%k+k)%k;
            mpp[a]++;
        }
        
        if(mpp[0]%2!=0)
        return 0;

        for(int i=1;i<=k/2;i++)
        {
            int a=k-i;
            if(mpp[a]!=mpp[i])
            return 0;
        }

        return 1;

       
    }
};
