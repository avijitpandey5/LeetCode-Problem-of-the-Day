class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        unordered_map<char,int>mpp1,mpp2;

        for(char c:s1)
        {
            mpp1[c]++;
        }

        int i=0,j=0,n=s2.length(),k=s1.length();

        while(j<n)
        {
            mpp2[s2[j]]++;
            j++;
            if(j-i==k)
            {
                if(mpp1==mpp2)
                return 1;

                mpp2[s2[i]]--;
                if(mpp2[s2[i]]==0)
                mpp2.erase(s2[i]);
                i++;
            }
        }

        return 0;
    }
};
