class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<s.size()/2;i++){
            int j = s.size()-1-i;
            swap(s[i],s[j]);
        }
        
    }
};
