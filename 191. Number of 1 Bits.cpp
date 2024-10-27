class Solution {
public:
    int hammingWeight(int n) {
      int cnt=0;
      int n1=n;
      while(n1!=0)
      {
        if((n1%2)==1) cnt++;
        n1 = n1>>1;

      }
        return cnt;
      
    }
  
};
