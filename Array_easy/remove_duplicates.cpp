class Solution {
public:
    int removeDuplicates1(vector<int>& nums) {
        if (nums.size()==0)
            return 0;
        int n = 0;
        for (int i=0; i<nums.size();i++){
            if (nums.at(i)!=nums.at(n)){
                n++;
                nums.at(n)=nums.at(i);
            }
        }
        return (n+1);
    }
  //fancy 2 line solution
  int removeDup(vector<int>& nums){
    nums.erase(unique(nums.begin(),nums.end()),nums.end()));
    return nums.size();
  }
  
};
