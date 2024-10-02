class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

       vector<int>v;
       for(int i=0;i<arr.size();i++)
       {
         v.push_back(arr[i]);
       }

       sort(v.begin(),v.end());

       map<int,int>mpp;
       int j=1;

       for(int i=0;i<v.size();i++)
       {
         if(mpp[v[i]]==0)
         {
          mpp[v[i]]=j;
          j++;
         }
       }

       vector<int>ans;

       for(int i=0;i<arr.size();i++)
       {
         ans.push_back(mpp[arr[i]]);
       }

       return ans;

    }
};
