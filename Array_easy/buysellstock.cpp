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


'''
    class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        localmax = prices[0] ######## needs to set up localmax otherwise you might have negative profit 
        localmin = prices[0]
        i = 1
        sz = len(prices)
        if sz == 1: return 0
        while(i<sz):
            #find local max
            while (i<sz and prices[i]>prices[i-1] and prices[i]>=localmin):
                localmax = prices[i]
                i+=1
            profit += localmax - localmin
            
            if(i==sz-1): return profit ####### will improve running time. 
            
            #find local min
            while (i<sz and prices[i]<=prices[i-1]):  ##Needs an equal sign to ensure i increments, avoid infinite loop. 
                localmin = prices[i]
                i+=1
        return profit
    
    '''
