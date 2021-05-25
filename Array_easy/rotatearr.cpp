class Solution{
public:
  void rotate(vector<int>& nums, int k){
    if (nums.size()==0 || k==0) return;
    
    //create an array's copy
    vector<int> copy(nums.size());
    for(int i = 0; i<nums.size(); i++){
       copy[i]=nums[i];
    }
    for(int i = 0; i<nums.size(); i++){
       nums[(i+k)%nums.size()] = copy[i]; 
    }
  }
}
