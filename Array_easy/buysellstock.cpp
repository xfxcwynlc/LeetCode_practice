class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int min = prices.at(0);
        int currmax = prices.at(0);
        int size = prices.size();
        if (size==1) return 0;
        int i = 1;
        while(i<size){
            //if local min, continuously find next local maximum point
            while( i<size && prices.at(i)>=min && prices.at(i)>=prices.at(i-1)){
                currmax = prices.at(i);
                i++;
            }
            profit+= currmax-min;
            
            if(i==size-1) return profit;
            //check if i is local min
            while(i<size && prices.at(i)<=prices.at(i-1)){
                min = prices.at(i);
                i++;
            }
        }
        return profit;
    }
};
