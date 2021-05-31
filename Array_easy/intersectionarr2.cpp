class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      //the idea is to create a dictionary. /hash map
      //make element in nums1 the keys in dict, and its occurances are the values
      //to check appearence in nums2, we will do subtraction. For each subtraction if the values>=0, it
      //means this key/element has appeared in nums1, as well as nums2.
      //Thus we include it. 
        unordered_map<int, int> dict;
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            dict[nums1.at(i)]++;
        }
        for(int i=0;i<nums2.size();i++){
            dict[nums2.at(i)]--;
            if(dict[nums2.at(i)]>=0){
                res.push_back(nums2[i]);
            }
        }
        return res;
        
    }
};
