class Solution {
public:
    long long dividePlayers(vector<int>& skill) {

        sort(skill.begin(),skill.end());

        int i=0;
        int j=skill.size()-1;
        long long sum=0;
        long long product=0;
        long long totalSum=0;
        long long sum1=0;
        while(i<j)
        {
            sum=skill[i]+skill[j];
            product=skill[i]*skill[j];
            totalSum+=product;
            i++;
            j--;
            if(sum1==0 || sum1==sum)
            {
                sum1=sum;
            }
            else
            {
                totalSum=-1;
                break;
            }
        }

        return totalSum;
        
    }
};
