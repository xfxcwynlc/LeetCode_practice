class Solution {
public:
  //The idea is to loop through the nums first, erase 0s while keeping the iterator in place (as loop-remove will screw up the iterator)
  //Then append 0s at then end.
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int numzeros = 0;
        if (size<=1){return;}
        for (vector<int>::iterator a = nums.begin(); a!=nums.end();){
            if ((*a)==0){
                numzeros++;
                a = nums.erase(a);
            }else{
                ++a;
            }
        }
        for(int i = 0;i<numzeros;i++){
            nums.push_back(0);
        }
        
    }
};
