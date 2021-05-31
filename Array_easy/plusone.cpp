class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i=digits.size()-1;i>=0;i--){
            if(digits.at(i)<9){
                digits.at(i)+=1;
                return digits; //we will return it once a digit is not ==9 anymore.
            }else{
                digits.at(i) = 0; //change current digit to 0, as it was 9 before.
            }
        }
        //insert 1 at the begining, this happens only if the nums are 9,9,..,9. 
        digits.insert(digits.begin(),1);
        return digits;
    }
};
