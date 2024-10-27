class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ls= 1;
        int rs =1;
       // vector<int>v1(n),v2(n),v(n);
        int n= nums.size();
        vector<int>v1(n),v2(n),v(n);
        for(int i=0;i<n;i++)
        {
            v1[i] = ls;
            ls = ls*nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            v2[i]=rs;
            rs=rs*nums[i];
        }
        for(int i=0;i<n;i++)
        {
            v[i]=v1[i]*v2[i];
        }
        return v;
    }
};
